/*
 * XREFs of ndisSriovInterfaceWriteVfConfigBlock @ 0x1C011B8E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceWriteVfConfigBlock(__int64 a1, __int16 a2, int a3, const void *a4, size_t Size)
{
  int v8; // edx
  _DWORD *PoolWithTag; // rax
  int v10; // edx
  _DWORD *v11; // rdi
  unsigned int SetMiniport; // ebx
  _QWORD v15[32]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v15, 0, 0xF8uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      26,
      95,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(Size + 20), 0x6F69444Eu);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(Size + 20));
    *v11 = 1311104;
    v11[4] = 20;
    *((_WORD *)v11 + 2) = a2;
    v11[2] = a3;
    v11[3] = Size;
    memmove(v11 + 5, a4, (unsigned int)Size);
    memset(v15, 0, 0xF8uLL);
    LODWORD(v15[11]) |= 8u;
    LODWORD(v15[1]) = 0;
    v15[13] = &ndisIntReqGeneric;
    v15[0] = 0x100EC0196LL;
    LODWORD(v15[4]) = 66132;
    v15[5] = v11;
    LODWORD(v15[6]) = Size + 20;
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, (__int64)v15, 0, 0LL);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    SetMiniport = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      26,
      96,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      SetMiniport);
  }
  return SetMiniport;
}
