/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x140193D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 InbvSetVirtualFrameBuffer()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043C6F8 && (v0 = *(__int64 (**)(void))(qword_14043C6F8 + 176)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
