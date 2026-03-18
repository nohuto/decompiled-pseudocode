/*
 * XREFs of ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00020BC
 * Callers:
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00B7DA0 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     DpiAppendStringToString @ 0x1C0147C38 (DpiAppendStringToString.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0159990 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1C000211C (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall RtlStringCbLengthW(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  size_t v3; // rax
  size_t v4; // rdx
  unsigned __int64 *v5; // r11
  NTSTATUS v6; // r8d
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2 >> 1;
  pcchLength = 0LL;
  v5 = a3;
  if ( a1 && v4 <= 0x7FFFFFFF )
  {
    v6 = RtlStringLengthWorkerW(a1, v4, &pcchLength);
    v3 = pcchLength;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v5 )
  {
    if ( v6 < 0 )
      *v5 = 0LL;
    else
      *v5 = 2 * v3;
  }
  return (unsigned int)v6;
}
