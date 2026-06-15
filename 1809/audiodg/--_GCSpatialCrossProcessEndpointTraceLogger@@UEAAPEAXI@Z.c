/*
 * XREFs of ??_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14005B740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14005B4FC (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

CSpatialCrossProcessEndpointTraceLogger *__fastcall CSpatialCrossProcessEndpointTraceLogger::`scalar deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
