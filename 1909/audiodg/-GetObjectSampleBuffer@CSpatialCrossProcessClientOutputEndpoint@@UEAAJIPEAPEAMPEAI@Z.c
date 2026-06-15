/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005E6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z @ 0x140059C70 (-LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x14005C1E4 (-GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005D400 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x14005EE20 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        float **a3,
        unsigned int *a4)
{
  int ObjectSampleBuffer; // ebx
  int v8; // eax
  bool v9; // r14
  int v10; // r11d
  unsigned int v12[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v13; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectSampleBuffer = -2005139437;
LABEL_10:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetObjectSampleBuffer",
      135,
      ObjectSampleBuffer);
    return (unsigned int)ObjectSampleBuffer;
  }
  if ( !*((_BYTE *)this + 1064) )
  {
    ObjectSampleBuffer = -2004287481;
    goto LABEL_10;
  }
  v8 = CSparseIndexMapRT::TranslateIndex(
         (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 928),
         a2,
         v12,
         &v13);
  v9 = v13;
  ObjectSampleBuffer = v8;
  CSpatialCrossProcessEndpointTraceLogger::LogClientIndexMap(
    (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 384),
    *((_DWORD *)this + 262),
    v10,
    (const GUID *)v12[0],
    v13,
    v8);
  if ( ObjectSampleBuffer < 0 )
    goto LABEL_10;
  if ( v9 )
    ObjectSampleBuffer = CSpatialCrossProcessBaseEndpoint::ZeroOutObject(
                           (SpatialBlock **)this - 2,
                           *((_DWORD *)this + 262),
                           v12[0]);
  if ( ObjectSampleBuffer < 0 )
    goto LABEL_10;
  ObjectSampleBuffer = CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(
                         (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                         *((_DWORD *)this + 262),
                         v12[0],
                         a3,
                         a4);
  if ( ObjectSampleBuffer < 0 )
    goto LABEL_10;
  return (unsigned int)ObjectSampleBuffer;
}
