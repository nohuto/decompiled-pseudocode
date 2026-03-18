/*
 * XREFs of ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C026A06C
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1C026C0A0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C026C2F0 (DxgkReleaseKeyedMutex2.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C02748A0 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0024A14 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0044C44 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::ReleaseSync(
        DXGKEYEDMUTEX *this,
        int a2,
        __int64 a3,
        struct _LIST_ENTRY *a4,
        char *Src,
        unsigned int Size)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  void *v19; // rcx
  char v20; // di
  _QWORD *i; // rax
  struct _KEVENT *v22; // rcx
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  v9 = (__int64)this;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v23, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( *(_DWORD *)(v9 + 36) == 3 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v13[3] = v9;
    v9 = 128LL;
LABEL_3:
    v13[4] = v9;
LABEL_13:
    WdLogEvent5_WdWarning(v13);
    goto LABEL_14;
  }
  if ( !DXGKEYEDMUTEX::IsOwner((DXGKEYEDMUTEX *)v9, a2) )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = v9;
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_14:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    return (unsigned int)v9;
  }
  if ( Src )
  {
    if ( !Size )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, Src, v16);
      v13[3] = v9;
      v9 = -1073741811LL;
      goto LABEL_3;
    }
    if ( Size != *(_DWORD *)(v9 + 144) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, Src, v16);
      v13[3] = v9;
      v13[4] = Size;
      v13[5] = *(unsigned int *)(v9 + 144);
      LODWORD(v9) = -1073741811;
      v13[6] = -1073741811LL;
      goto LABEL_13;
    }
    v19 = *(void **)(v9 + 136);
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v19, Src, Size);
  }
  else if ( Size )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, 0LL, v16);
    LODWORD(v9) = -1073741811;
    v13[3] = -1073741811LL;
    goto LABEL_13;
  }
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0LL;
  v20 = 0;
  for ( i = *(_QWORD **)(v9 + 80); i != (_QWORD *)(v9 + 80); i = (_QWORD *)*i )
  {
    v22 = (struct _KEVENT *)(i - 8);
    if ( *(i - 8) == a3 )
    {
      v20 = 1;
      *(_DWORD *)(v9 + 36) = 2;
      *(_QWORD *)(v9 + 72) = v22;
      v22[2].Header.LockNV = 0;
      v22[2].Header.WaitListHead.Flink = a4;
      KeSetEvent(v22 + 1, 0, 0);
      break;
    }
  }
  if ( !v20 )
  {
    *(_DWORD *)(v9 + 36) = 1;
    *(_QWORD *)(v9 + 56) = a3;
    *(_QWORD *)(v9 + 64) = a4;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  return 0LL;
}
