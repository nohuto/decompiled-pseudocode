/*
 * XREFs of EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1C009EA90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xx @ 0x1C0132A68 (McTemplateK0xx.c)
 */

__int64 __fastcall EtwLogicalSurfEnableDirtyNotificationEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xx(a1, &LogicalSurfEnableDirtyNotificationEvent, a3, a1, a2);
  return result;
}
