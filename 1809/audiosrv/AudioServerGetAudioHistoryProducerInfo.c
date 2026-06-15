/*
 * XREFs of AudioServerGetAudioHistoryProducerInfo @ 0x1800DBA40
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180002EE4 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180009BA0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180014480 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800DB5F8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall AudioServerGetAudioHistoryProducerInfo(char *a1, _OWORD *a2, _QWORD *a3, char **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  HRESULT v10; // eax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rbx
  int v13; // eax
  unsigned __int64 v16; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v17, a1);
  *a4 = 0LL;
  *a2 = *(_OWORD *)(a1 + 280);
  a2[1] = *(_OWORD *)(a1 + 296);
  a2[2] = *(_OWORD *)(a1 + 312);
  a2[3] = *(_OWORD *)(a1 + 328);
  a2[4] = *(_OWORD *)(a1 + 344);
  a2[5] = *(_OWORD *)(a1 + 360);
  a2[6] = *(_OWORD *)(a1 + 376);
  a2[7] = *(_OWORD *)(a1 + 392);
  memset_0((char *)a2 + 40, 0, 0x38uLL);
  if ( !*((_DWORD *)a2 + 28) )
  {
    v7 = -2147024809;
    v8 = 4825LL;
LABEL_7:
    v11 = v7;
    goto LABEL_8;
  }
  v9 = *((_QWORD *)a1 + 62);
  v16 = 0LL;
  *a3 = v9;
  v10 = StringCchLengthW(*((const unsigned __int16 **)a1 + 26), 0x104uLL, &v16);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v8 = 4830LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  v12 = v16;
  *a4 = (char *)MIDL_user_allocate(2 * v16 + 2);
  if ( !*a4 )
  {
    v7 = -2147024882;
    v8 = 4832LL;
    goto LABEL_7;
  }
  v13 = StringCchCopyW(*a4, v12 + 1, *((char **)a1 + 26));
  v7 = v13;
  if ( v13 >= 0 )
  {
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      4839LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v13);
    operator delete(*a4);
    *a4 = 0LL;
  }
LABEL_12:
  EtwEventActivityIdControl(4LL, v18);
  return v7;
}
