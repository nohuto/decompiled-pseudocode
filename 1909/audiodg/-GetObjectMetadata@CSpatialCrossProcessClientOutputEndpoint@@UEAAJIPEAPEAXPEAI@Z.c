/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z @ 0x140059C70 (-LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14005C0DC (-GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005D400 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x14005EE20 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectMetadata(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  int ObjectMetadata; // ebx
  int v8; // eax
  bool v9; // r14
  int v10; // r11d
  unsigned int v12[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v13; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectMetadata = -2005139437;
LABEL_10:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetObjectMetadata", 214, ObjectMetadata);
    return (unsigned int)ObjectMetadata;
  }
  if ( !*((_BYTE *)this + 1064) )
  {
    ObjectMetadata = -2004287481;
    goto LABEL_10;
  }
  v8 = CSparseIndexMapRT::TranslateIndex(
         (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 928),
         a2,
         v12,
         &v13);
  v9 = v13;
  ObjectMetadata = v8;
  CSpatialCrossProcessEndpointTraceLogger::LogClientIndexMap(
    (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 384),
    *((_DWORD *)this + 262),
    v10,
    (const GUID *)v12[0],
    v13,
    v8);
  if ( ObjectMetadata < 0 )
    goto LABEL_10;
  if ( v9 )
    ObjectMetadata = CSpatialCrossProcessBaseEndpoint::ZeroOutObject(
                       (SpatialBlock **)this - 2,
                       *((_DWORD *)this + 262),
                       v12[0]);
  if ( ObjectMetadata < 0 )
    goto LABEL_10;
  ObjectMetadata = CSpatialCrossProcessBaseEndpoint::GetObjectMetadata(
                     (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                     *((_DWORD *)this + 262),
                     v12[0],
                     a3,
                     a4);
  if ( ObjectMetadata < 0 )
    goto LABEL_10;
  return (unsigned int)ObjectMetadata;
}
