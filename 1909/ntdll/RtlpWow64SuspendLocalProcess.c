/*
 * XREFs of RtlpWow64SuspendLocalProcess @ 0x1800DB780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWow64SuspendLocalProcess(PVOID a1)
{
  if ( g_LdrpWow64SuspendLocalProcess )
    return g_LdrpWow64SuspendLocalProcess(a1);
  else
    return 3221225485LL;
}
