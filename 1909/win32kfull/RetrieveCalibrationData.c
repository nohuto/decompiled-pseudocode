/*
 * XREFs of RetrieveCalibrationData @ 0x1C01D2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C01D1C9C (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 *     GetPointerDeviceKey @ 0x1C01D8040 (GetPointerDeviceKey.c)
 */

NTSTATUS __fastcall RetrieveCalibrationData(struct tagHID_POINTER_DEVICE_INFO *a1, struct _UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING v5; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v5 = *a2;
  result = GetPointerDeviceKey(&v5, &Handle);
  if ( result )
  {
    v5 = *a2;
    ReadLinearityData(a1, &v5, Handle);
    return ZwClose(Handle);
  }
  return result;
}
