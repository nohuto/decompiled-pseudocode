/*
 * XREFs of EtwUpdateEvent @ 0x1C0087540
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xq @ 0x1C010DEC0 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwUpdateEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xq(a1, &UpdateEvent, a3, a1, a2);
  return result;
}
