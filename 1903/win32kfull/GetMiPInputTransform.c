/*
 * XREFs of GetMiPInputTransform @ 0x1C01E36B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01F6654 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 */

__int64 __fastcall GetMiPInputTransform(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  InputTransform *v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagINPUT_TRANSFORM *v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 1280);
  if ( !v6 || (*(_DWORD *)v6 & 1) == 0 || (v7 = (InputTransform *)ValidateHwnd(*(_QWORD *)(v6 + 48))) == 0LL )
  {
LABEL_8:
    v9 = 87LL;
    goto LABEL_9;
  }
  v8 = *(_QWORD *)(a1 + 1280);
  if ( (*(_DWORD *)(v8 + 36) & 0x400000) != 0 )
  {
    v13 = *(_QWORD *)(v8 + 104);
    LOBYTE(v11) = 1;
    if ( (unsigned int)InputTransform::GetTransformList(v7, (struct tagWND *)1, (unsigned int)&v13, a2, v11, v12) )
      return 1LL;
    goto LABEL_8;
  }
  v9 = 232LL;
LABEL_9:
  UserSetLastError(v9, (__int64)a2, a3, a4);
  return 0LL;
}
