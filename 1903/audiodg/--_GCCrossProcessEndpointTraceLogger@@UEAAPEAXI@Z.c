/*
 * XREFs of ??_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140053C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140053AE0 (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

CCrossProcessEndpointTraceLogger *__fastcall CCrossProcessEndpointTraceLogger::`scalar deleting destructor'(
        CCrossProcessEndpointTraceLogger *this,
        char a2)
{
  CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
