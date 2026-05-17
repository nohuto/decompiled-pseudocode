/*
 * XREFs of RtlpWow64SuspendLocalProcess @ 0x1800DB780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlpWow64SuspendLocalProcess()
{
  if ( g_LdrpWow64SuspendLocalProcess )
    return g_LdrpWow64SuspendLocalProcess();
  else
    return 3221225485LL;
}
