/*
 * XREFs of ?NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION@@W4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE@@@Z @ 0x18011DE60
 * Callers:
 *     <none>
 * Callees:
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_ae62b22dc7422aedd6747558e69d6d3d___ @ 0x180118890 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_ae62b22dc7422aedd6747558e69d6d3d___.c)
 */

__int64 __fastcall CImmersiveApp::NotifyApplicationWindows(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  int v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+3Ch] [rbp-1Ch]
  int v18; // [rsp+40h] [rbp-18h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 352) == 0LL ? 0x8007139F : 0;
  if ( *(_QWORD *)(a1 + 352) )
  {
    v16 = a5;
    v17 = a6;
    LOBYTE(v10) = a6 != 0;
    v13 = a2;
    v18 = v10;
    v14 = a3;
    v15 = a4;
    CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_ae62b22dc7422aedd6747558e69d6d3d___(
      a1 + 176,
      (__int64)&v13);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v11;
}
