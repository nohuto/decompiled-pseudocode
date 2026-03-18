/*
 * XREFs of SetCsrApiPortHandle @ 0x1C00A9000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetCsrApiPortHandle(void *a1)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = -1073741823;
  if ( CsrApiPort
    || (v1 = ObReferenceObjectByHandle(a1, 0, LpcPortObjectType, 1, &Object, 0LL), CsrApiPort = Object, v1 < 0) )
  {
    CsrApiPort = 0LL;
  }
  KeSetEvent(gpevtQueueReadyForCallout, 1, 0);
  return (unsigned int)v1;
}
