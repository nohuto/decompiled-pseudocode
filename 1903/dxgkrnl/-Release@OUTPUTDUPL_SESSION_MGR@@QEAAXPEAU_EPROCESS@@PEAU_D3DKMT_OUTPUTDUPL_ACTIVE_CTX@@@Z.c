/*
 * XREFs of ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0274A44
 * Callers:
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C027AB20 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C027513C (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Release(
        struct DXGFASTMUTEX **this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // edx
  __int64 v11; // rbx
  __int128 v12; // rtt
  unsigned int v13; // r8d
  __int64 v14; // rdx
  struct DXGFASTMUTEX **v15; // r10
  __int64 v16; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v7 = *((_DWORD *)this + 1);
  v8 = *(_QWORD *)this[2];
  v9 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v6 = 32LL * v9;
      if ( a2 == *(struct _EPROCESS **)(v6 + v8 + 8) )
      {
        v10 = *(_DWORD *)(v6 + v8);
        if ( v10 )
          break;
      }
      if ( ++v9 >= v7 )
        goto LABEL_8;
    }
    v11 = 32LL * v9;
    *(_DWORD *)(v11 + v8) = v10 - 1;
    if ( v10 == 1 )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v12 = (__int64)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(v11 + v8 + 16));
      *(_DWORD *)(v11 + v8 + 24) += v12 / PerformanceFrequency.QuadPart;
    }
  }
LABEL_8:
  if ( a3 )
  {
    v13 = *((_DWORD *)this + 12);
    v14 = 0LL;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = &this[3 * v14];
        if ( v15[7] == *(struct DXGFASTMUTEX **)a3 )
        {
          v6 = 3 * v14;
          if ( LODWORD(this[3 * v14 + 9]) == *((_DWORD *)a3 + 4)
            && LODWORD(this[3 * v14 + 8]) == *((_DWORD *)a3 + 2)
            && HIDWORD(this[3 * v14 + 8]) == *((_DWORD *)a3 + 3) )
          {
            break;
          }
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_15;
      }
      memmove(
        v15 + 7,
        &this[2 * (unsigned int)(v14 + 1) + 7] + (unsigned int)(v14 + 1),
        24LL * (v13 - (unsigned int)v14 - 1));
      --*((_DWORD *)this + 12);
      OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF((OUTPUTDUPL_SESSION_MGR *)this);
    }
    else
    {
LABEL_15:
      v16 = WdLogNewEntry5_WdAssertion(v6, v14);
      *(_QWORD *)(v16 + 24) = 4321LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
}
