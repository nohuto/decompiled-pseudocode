/*
 * XREFs of ??_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140053B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x1400539F0 (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
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
