/*
 * XREFs of RtlpCheckDynamicTimeZoneInformation @ 0x140764E54
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlpFindRegTziForCurrentYear @ 0x14018D95C (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140764F90 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpRegTziFormatToTzi @ 0x14076511C (RtlpRegTziFormatToTzi.c)
 */

char __fastcall RtlpCheckDynamicTimeZoneInformation(char *Buf2, __int16 a2)
{
  char v4; // di
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  char *v22; // rbx
  __int64 v23; // rax
  __int128 v24; // xmm1
  WCHAR *Handle; // [rsp+20h] [rbp-108h]
  _DWORD v26[14]; // [rsp+28h] [rbp-100h] BYREF
  __int128 Buf1; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+70h] [rbp-B8h]
  __int128 v29; // [rsp+80h] [rbp-A8h]
  __int128 v30; // [rsp+90h] [rbp-98h]
  __int128 v31; // [rsp+A0h] [rbp-88h]
  __int128 v32; // [rsp+B0h] [rbp-78h]
  __int128 v33; // [rsp+C0h] [rbp-68h]
  __int128 v34; // [rsp+D0h] [rbp-58h]
  __int128 v35; // [rsp+E0h] [rbp-48h]
  __int128 v36; // [rsp+F0h] [rbp-38h]
  __int64 v37; // [rsp+100h] [rbp-28h]
  int v38; // [rsp+108h] [rbp-20h]

  memset(v26, 0, 0x2CuLL);
  v4 = 0;
  if ( (int)RtlpGetDynamicTimeZoneInfoHandle((NTSTRSAFE_PCWSTR)Buf2 + 86) >= 0 )
  {
    if ( (int)RtlpFindRegTziForCurrentYear(v26, Handle, a2) >= 0 )
    {
      v6 = *((_OWORD *)Buf2 + 1);
      Buf1 = *(_OWORD *)Buf2;
      v7 = *((_QWORD *)Buf2 + 20);
      v8 = *((_OWORD *)Buf2 + 2);
      v28 = v6;
      v9 = *((_OWORD *)Buf2 + 3);
      v29 = v8;
      v10 = *((_OWORD *)Buf2 + 4);
      v30 = v9;
      v11 = *((_OWORD *)Buf2 + 5);
      v31 = v10;
      v12 = *((_OWORD *)Buf2 + 6);
      v32 = v11;
      v13 = *((_OWORD *)Buf2 + 8);
      v33 = v12;
      v34 = *((_OWORD *)Buf2 + 7);
      v14 = *((_OWORD *)Buf2 + 9);
      v35 = v13;
      v36 = v14;
      v37 = v7;
      v38 = *((_DWORD *)Buf2 + 42);
      RtlpRegTziFormatToTzi(&Buf1, v26);
      if ( memcmp(&Buf1, Buf2, 0xACuLL) )
      {
        v4 = 1;
        v15 = v28;
        *(_OWORD *)Buf2 = Buf1;
        v16 = v29;
        *((_OWORD *)Buf2 + 1) = v15;
        v17 = v30;
        *((_OWORD *)Buf2 + 2) = v16;
        v18 = v31;
        *((_OWORD *)Buf2 + 3) = v17;
        v19 = v32;
        *((_OWORD *)Buf2 + 4) = v18;
        v20 = v33;
        *((_OWORD *)Buf2 + 5) = v19;
        v21 = v34;
        *((_OWORD *)Buf2 + 6) = v20;
        v22 = Buf2 + 128;
        *((_OWORD *)v22 - 1) = v21;
        v23 = v37;
        v24 = v36;
        *(_OWORD *)v22 = v35;
        *((_OWORD *)v22 + 1) = v24;
        *((_QWORD *)v22 + 4) = v23;
        *((_DWORD *)v22 + 10) = v38;
      }
    }
    ZwClose(Handle);
  }
  return v4;
}
