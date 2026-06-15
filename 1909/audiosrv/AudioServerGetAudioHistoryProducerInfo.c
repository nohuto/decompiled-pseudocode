/*
 * XREFs of AudioServerGetAudioHistoryProducerInfo @ 0x1800E6D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E1F0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x1800471A0 (MIDL_user_allocate.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18004D9E0 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800E3BB0 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall AudioServerGetAudioHistoryProducerInfo(
        char *a1,
        _OWORD *a2,
        _QWORD *a3,
        char **a4,
        _DWORD *a5,
        _QWORD *a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  HRESULT v12; // eax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int16 *v18; // rbx
  void *v19; // rax
  unsigned __int64 v22; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v23[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v23, a1);
  *a4 = 0LL;
  *a2 = *(_OWORD *)(a1 + 280);
  a2[1] = *(_OWORD *)(a1 + 296);
  a2[2] = *(_OWORD *)(a1 + 312);
  a2[3] = *(_OWORD *)(a1 + 328);
  a2[4] = *(_OWORD *)(a1 + 344);
  a2[5] = *(_OWORD *)(a1 + 360);
  a2[6] = *(_OWORD *)(a1 + 376);
  a2[7] = *(_OWORD *)(a1 + 392);
  a2[8] = *(_OWORD *)(a1 + 408);
  a2[9] = *(_OWORD *)(a1 + 424);
  memset_0((char *)a2 + 72, 0, 0x38uLL);
  if ( !*((_DWORD *)a2 + 36) )
  {
    v9 = -2147024809;
    v10 = 4778LL;
LABEL_7:
    v13 = v9;
    goto LABEL_8;
  }
  v11 = *((_QWORD *)a1 + 66);
  v22 = 0LL;
  *a3 = v11;
  v12 = StringCchLengthW(*((const unsigned __int16 **)a1 + 26), 0x104uLL, &v22);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v10 = 4783LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v13);
    goto LABEL_15;
  }
  v14 = v22;
  *a4 = (char *)MIDL_user_allocate(2 * v22 + 2);
  if ( !*a4 )
  {
    v9 = -2147024882;
    v10 = 4785LL;
    goto LABEL_7;
  }
  v15 = StringCchCopyW(*a4, v14 + 1, *((char **)a1 + 26));
  v9 = v15;
  if ( v15 >= 0 )
  {
    v18 = (unsigned __int16 *)*((_QWORD *)a1 + 22);
    v19 = MIDL_user_allocate(v18[8] + 18LL);
    *a6 = v19;
    if ( v19 )
    {
      memcpy_0(v19, v18, v18[8] + 18LL);
      v9 = 0;
      *a5 = *((_DWORD *)a1 + 136) == 3;
      goto LABEL_15;
    }
    v9 = -2147024882;
    v17 = 4796LL;
    v16 = 2147942414LL;
  }
  else
  {
    v16 = (unsigned int)v15;
    v17 = 4792LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v16);
  operator delete(*a4);
  *a4 = 0LL;
LABEL_15:
  EtwEventActivityIdControl(4LL, v24);
  return v9;
}
