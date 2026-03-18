/*
 * XREFs of ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C00C3294
 * Callers:
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00C3418 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CDBBC (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DEE0 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1C001F200 (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall DXGGLOBAL::RecordFeatureUsage(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // r11
  NTSTATUS v7; // edi
  const wchar_t *v8; // r11
  wchar_t *v9; // r11
  size_t v10; // [rsp+40h] [rbp-9h] BYREF
  __int64 v11; // [rsp+48h] [rbp-1h]
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  int Data; // [rsp+C0h] [rbp+77h] BYREF
  size_t pcchLength; // [rsp+C8h] [rbp+7Fh] BYREF

  Data = a3;
  v3 = a2;
  if ( (unsigned int)(a2 - 10) > 1 && *(_BYTE *)(a2 + a1 + 304128) )
    return 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( RtlStringLengthWorkerW(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage",
         0x7FFFuLL,
         &pcchLength) >= 0 )
  {
    v11 = v6;
    LOWORD(v10) = 2 * pcchLength;
    WORD1(v10) = 2 * pcchLength + 2;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 704;
  v7 = ZwCreateKey((PHANDLE)&pcchLength, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( !v7 )
  {
    v8 = off_1C0067360[v3];
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    if ( v8 && RtlStringLengthWorkerW(v8, 0x7FFFuLL, &v10) >= 0 )
    {
      ValueName.Buffer = v9;
      ValueName.Length = 2 * v10;
      ValueName.MaximumLength = 2 * v10 + 2;
    }
    v7 = ZwSetValueKey((HANDLE)pcchLength, &ValueName, 0, 4u, &Data, 4u);
    ZwClose((HANDLE)pcchLength);
  }
  if ( v7 >= 0 )
    *(_BYTE *)(v3 + a1 + 304128) = 1;
  return (unsigned int)v7;
}
