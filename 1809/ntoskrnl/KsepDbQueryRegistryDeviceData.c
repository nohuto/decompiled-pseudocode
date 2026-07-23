/*
 * XREFs of KsepDbQueryRegistryDeviceData @ 0x140721E3C
 * Callers:
 *     KseQueryDeviceData @ 0x140721BD0 (KseQueryDeviceData.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KsepRegistryOpenKey @ 0x14067F018 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14067F30C (KsepStringFree.c)
 *     KsepStringTransform @ 0x140721ED8 (KsepStringTransform.c)
 *     KsepRegistryQueryValue @ 0x14084A5AC (KsepRegistryQueryValue.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-10h]

  LODWORD(v11) = 0;
  v12 = 0LL;
  Handle = 0LL;
  Value = KsepStringTransform(&v11, a1);
  if ( Value >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v12,
                &Handle) < 0
      || (v10 = (unsigned int)*a4,
          Value = KsepRegistryQueryValue(Handle, a2, v10, (__int64)&v10),
          *a4 = v10,
          Value == -1073741772) )
    {
      Value = -1073741275;
    }
    else if ( Value >= 0 )
    {
      Value = 0;
      *a3 |= 0x10000000u;
    }
    if ( Handle )
    {
      ZwClose(Handle);
      _InterlockedIncrement(&dword_14041BC3C);
    }
  }
  KsepStringFree(&v11);
  return (unsigned int)Value;
}
