/*
 * XREFs of SecureDmaEnabler_MapMemory @ 0x1C006B084
 * Callers:
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C006ABC8 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall SecureDmaEnabler_MapMemory(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  int v8; // eax
  unsigned __int16 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-31h]
  int v14; // [rsp+28h] [rbp-31h]
  __int64 v15; // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+38h] [rbp-21h] BYREF
  __int64 v17; // [rsp+40h] [rbp-19h]
  __int64 v18; // [rsp+48h] [rbp-11h]
  _QWORD v19[7]; // [rsp+50h] [rbp-9h] BYREF

  memset(v19, 0, sizeof(v19));
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0x12u,
        0xCu,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids);
    v7 = -1073741637;
    goto LABEL_15;
  }
  v8 = VslCreateSecureSection(&v15, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 560LL), a2, 4LL, 1);
  v7 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v9 = 13;
    goto LABEL_8;
  }
  v19[3] = *(_QWORD *)(a1 + 16);
  v19[5] = v15;
  v10 = *(_QWORD *)(a1 + 8);
  LODWORD(v19[4]) = 5;
  LODWORD(v19[6]) = 4096;
  v7 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v10 + 112), (unsigned int)v19, 56, (unsigned int)&v16, 24);
  if ( v7 >= 0 )
  {
    v8 = v16;
    if ( (int)v16 >= 0 )
    {
      *(_DWORD *)(a4 + 12) = 0;
      *(_QWORD *)a4 = v17;
      *(_QWORD *)(a4 + 16) = v18;
      *(_QWORD *)(a4 + 24) = v15;
      *(_DWORD *)(a4 + 8) = 4096;
    }
    else
    {
      v7 = v16;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 14;
LABEL_8:
        v14 = v8;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0x12u,
          v9,
          (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
          v14);
      }
    }
LABEL_14:
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
LABEL_15:
  if ( v15 )
  {
    v11 = VslDeleteSecureSection(v15);
    if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0x12u,
        0xFu,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v13);
    }
  }
  return (unsigned int)v7;
}
