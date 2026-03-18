/*
 * XREFs of ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01CA184
 * Callers:
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01CA2D0 (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C00A60B8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00D889C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCu.c)
 */

void __fastcall Feedback::xxxReplaceMouseCursorsWithPenCursors(Feedback *this)
{
  unsigned __int16 *v1; // rbx
  __int64 v2; // rdi
  int v3; // esi
  unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  ULONG_PTR Image; // rax
  UNICODE_STRING v7; // [rsp+40h] [rbp-18h] BYREF

  v1 = (unsigned __int16 *)&unk_1C02D8C90;
  v2 = 4LL;
  v3 = *(_DWORD *)(gpsi + 2056LL);
  do
  {
    v4 = v1 - 2;
    if ( !v3 )
      v4 = v1;
    RtlInitUnicodeStringOrId(&v7, (WCHAR *)*v4);
    Image = xxxClientLoadImage(&v7.Length, v5, 2u, 0, 0, 64);
    if ( Image )
      zzzInternalSetSystemCursor(Image, *((_DWORD *)v1 - 2), &v7, 6);
    v1 += 6;
    --v2;
  }
  while ( v2 );
  Feedback::gfUsingPenCursors = 1;
}
