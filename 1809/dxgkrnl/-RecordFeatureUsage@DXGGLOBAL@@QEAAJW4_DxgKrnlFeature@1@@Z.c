/*
 * XREFs of ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@@Z @ 0x1C02110CC
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1C000211C (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall DXGGLOBAL::RecordFeatureUsage(size_t a1, int a2)
{
  __int64 v2; // rdi
  wchar_t *v3; // r11
  unsigned int v4; // ebx
  const wchar_t *v5; // r11
  wchar_t *v6; // r11
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+A0h] [rbp+20h] BYREF
  int Data; // [rsp+A8h] [rbp+28h] BYREF
  size_t v12; // [rsp+B0h] [rbp+30h] BYREF

  pcchLength = a1;
  v2 = a2;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  if ( RtlStringLengthWorkerW(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage",
         0x7FFFuLL,
         &pcchLength) >= 0 )
  {
    ValueName.Buffer = v3;
    ValueName.Length = 2 * pcchLength;
    ValueName.MaximumLength = 2 * pcchLength + 2;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &ValueName;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 704;
  v4 = ZwCreateKey((PHANDLE)&pcchLength, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( !v4 )
  {
    Data = 1;
    *(_QWORD *)&ValueName.Length = 0LL;
    v5 = off_1C0064CB8[v2];
    ValueName.Buffer = 0LL;
    if ( v5 && RtlStringLengthWorkerW(v5, 0x7FFFuLL, &v12) >= 0 )
    {
      ValueName.Buffer = v6;
      ValueName.Length = 2 * v12;
      ValueName.MaximumLength = 2 * v12 + 2;
    }
    v4 = ZwSetValueKey((HANDLE)pcchLength, &ValueName, 0, 4u, &Data, 4u);
    ZwClose((HANDLE)pcchLength);
  }
  return v4;
}
