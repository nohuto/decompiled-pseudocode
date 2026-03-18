/*
 * XREFs of ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA5BC
 * Callers:
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA894 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReas.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01CA22C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C00A60B8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00D889C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCu.c)
 *     xxxClientExpandStringW @ 0x1C00DAF0C (xxxClientExpandStringW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateSystemCursorFromRegistry(__int64 a1, signed int a2, int a3)
{
  __int64 v5; // rsi
  int v7; // edi
  __int64 v8; // rbx
  _OWORD *v9; // rcx
  WCHAR *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rdx
  PWSTR Buffer; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  ULONG_PTR Image; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v28; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[528]; // [rsp+270h] [rbp+170h] BYREF

  v5 = 276LL * a2;
  v7 = 576;
  FastGetProfileStringFromIDW(a1, 1LL, gasyscur[v5 + 1], &pwsz, SourceString, 260, 0);
  if ( SourceString[0]
    || (FastGetProfileStringFromIDW(
          a1,
          58LL,
          *(unsigned __int16 *)(v5 * 2 + *(_QWORD *)gasyscur + 2),
          &pwsz,
          SourceString,
          260,
          0),
        SourceString[0]) )
  {
    v8 = 4LL;
    v9 = v30;
    v7 = 592;
    v10 = SourceString;
    v11 = 4LL;
    do
    {
      v12 = *((_OWORD *)v10 + 1);
      *v9 = *(_OWORD *)v10;
      v13 = *((_OWORD *)v10 + 2);
      v9[1] = v12;
      v14 = *((_OWORD *)v10 + 3);
      v9[2] = v13;
      v15 = *((_OWORD *)v10 + 4);
      v9[3] = v14;
      v16 = *((_OWORD *)v10 + 5);
      v9[4] = v15;
      v17 = *((_OWORD *)v10 + 6);
      v9[5] = v16;
      v18 = *((_OWORD *)v10 + 7);
      v10 += 64;
      v9[6] = v17;
      v9 += 8;
      *(v9 - 1) = v18;
      --v11;
    }
    while ( v11 );
    *(_QWORD *)v9 = *(_QWORD *)v10;
    v28 = v30;
    v19 = -1LL;
    do
      ++v19;
    while ( SourceString[v19] );
    v20 = 2 * v19;
    if ( v20 >= 0x206 )
      v20 = 518;
    v27[0] = v20;
    v27[1] = 520;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)xxxClientExpandStringW((struct _LARGE_STRING *)v27) )
    {
      Buffer = DestinationString.Buffer;
      v7 = 80;
      v23 = v28;
      do
      {
        *(_OWORD *)Buffer = *v23;
        *((_OWORD *)Buffer + 1) = v23[1];
        *((_OWORD *)Buffer + 2) = v23[2];
        *((_OWORD *)Buffer + 3) = v23[3];
        *((_OWORD *)Buffer + 4) = v23[4];
        *((_OWORD *)Buffer + 5) = v23[5];
        *((_OWORD *)Buffer + 6) = v23[6];
        Buffer += 64;
        v24 = v23[7];
        v23 += 8;
        *((_OWORD *)Buffer - 1) = v24;
        --v8;
      }
      while ( v8 );
      *(_QWORD *)Buffer = *(_QWORD *)v23;
      DestinationString.Length = v27[0];
      if ( LOWORD(v27[0]) >= 0x206u )
        DestinationString.Length = 518;
      DestinationString.MaximumLength = 520;
    }
  }
  else
  {
    RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(a2 + 100));
  }
  Image = xxxClientLoadImage(&DestinationString.Length, v21, 2u, 0, 0, v7);
  if ( Image )
    zzzInternalSetSystemCursor(Image, a2, &DestinationString, a3);
}
