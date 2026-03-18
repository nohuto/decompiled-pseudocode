/*
 * XREFs of DwmSyncGetTitleBarInfo @ 0x1C0086288
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C008616C (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0086F78 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DwmSyncGetTitleBarInfo(PVOID Object, __int64 a2, __int128 *a3, _DWORD *a4)
{
  signed int v8; // edi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _BYTE v27[688]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    v8 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v27, 0, sizeof(v27));
      v9 = *a3;
      *(_QWORD *)&v27[44] = a2;
      v10 = a3[1];
      *(_DWORD *)v27 = 12845212;
      *(_DWORD *)&v27[40] = 1073741850;
      *(_WORD *)&v27[4] = 0x8000;
      *(_OWORD *)&v27[52] = v9;
      v11 = *((_QWORD *)a3 + 16);
      v12 = a3[2];
      *(_OWORD *)&v27[68] = v10;
      v13 = a3[3];
      *(_OWORD *)&v27[84] = v12;
      v14 = a3[4];
      *(_OWORD *)&v27[100] = v13;
      v15 = a3[5];
      *(_OWORD *)&v27[116] = v14;
      v16 = a3[6];
      *(_OWORD *)&v27[132] = v15;
      *(_OWORD *)&v27[148] = v16;
      *(_OWORD *)&v27[164] = a3[7];
      *(_QWORD *)&v27[180] = v11;
      *(_DWORD *)&v27[188] = *((_DWORD *)a3 + 34);
      v17 = LpcRequestWaitReplyPortEx(Object, v27, v27);
      v8 = SyncLpcCheckNtStatus(v17, (struct _PORT_MESSAGE *)v27);
      if ( v8 >= 0 )
      {
        if ( *(_DWORD *)&v27[52] == 140 )
        {
          v18 = *(_QWORD *)&v27[180];
          v19 = *(_OWORD *)&v27[68];
          *a3 = *(_OWORD *)&v27[52];
          v20 = *(_OWORD *)&v27[84];
          a3[1] = v19;
          v21 = *(_OWORD *)&v27[100];
          a3[2] = v20;
          v22 = *(_OWORD *)&v27[116];
          a3[3] = v21;
          v23 = *(_OWORD *)&v27[132];
          a3[4] = v22;
          v24 = *(_OWORD *)&v27[148];
          a3[5] = v23;
          v25 = *(_OWORD *)&v27[164];
          a3[6] = v24;
          a3[7] = v25;
          *((_QWORD *)a3 + 16) = v18;
          *((_DWORD *)a3 + 34) = *(_DWORD *)&v27[188];
          *a4 = *(_DWORD *)&v27[192];
        }
        else
        {
          v8 = -1073741453;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
