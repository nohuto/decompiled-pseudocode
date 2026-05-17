/*
 * XREFs of RtlGetFullPathName_U @ 0x1800357B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_UEx @ 0x1800357E0 (RtlGetFullPathName_UEx.c)
 */

__int64 __fastcall RtlGetFullPathName_U(int a1, int a2, int a3, int a4)
{
  int FullPathName_UEx; // eax
  unsigned int v5; // ecx
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  FullPathName_UEx = RtlGetFullPathName_UEx(a1, a2, a3, a4, (__int64)v7);
  v5 = 0;
  if ( FullPathName_UEx >= 0 )
    return v7[0];
  return v5;
}
