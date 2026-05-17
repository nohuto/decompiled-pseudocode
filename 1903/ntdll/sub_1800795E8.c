/*
 * XREFs of sub_1800795E8 @ 0x1800795E8
 * Callers:
 *     sub_1800219E8 @ 0x1800219E8 (sub_1800219E8.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18002DC10 @ 0x18002DC10 (sub_18002DC10.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 */

__int64 __fastcall sub_1800795E8(__int64 a1, volatile signed __int32 **a2, _DWORD *a3)
{
  int v4; // eax
  int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp-19h] BYREF
  __int64 v9; // [rsp+58h] [rbp-11h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v11[16]; // [rsp+68h] [rbp-1h] BYREF
  int v12; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  int v15; // [rsp+90h] [rbp+27h]
  __int128 v16; // [rsp+98h] [rbp+2Fh]
  unsigned __int64 v17; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int64 v18; // [rsp+E8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  v14 = a1;
  v4 = 64;
  if ( !byte_180165380 )
    v4 = 2112;
  v12 = 48;
  v15 = v4;
  v16 = 0LL;
  v6 = ZwOpenFile(&v9, 1048577LL, &v12, v11, 5, 96);
  if ( v6 >= 0 )
  {
    v6 = ZwCreateSection(&v8, 4LL, 0LL);
    if ( v6 >= 0 )
    {
      v17 = 0LL;
      v18 = 0LL;
      v6 = ZwMapViewOfSection(v8, -1LL, &v17, 0LL, 0LL, 0LL, &v18, 1, 0, 2);
      if ( v6 >= 0 )
      {
        v6 = RtlImageNtHeaderEx(0, v17, v18, &v10);
        if ( v6 >= 0 )
          v6 = sub_18002DC10(v17, v10, a2, a3);
        ZwUnmapViewOfSection(-1LL);
      }
      ZwClose(v8);
    }
    ZwClose(v9);
  }
  return (unsigned int)v6;
}
