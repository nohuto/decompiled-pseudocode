/*
 * XREFs of ValidateAcpiCPC @ 0x1C002CE58
 * Callers:
 *     InitAcpiCpc @ 0x1C002005C (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     CpcRegisterIsSupported @ 0x1C0008AD4 (CpcRegisterIsSupported.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00093AC (WPP_RECORDER_SF_dd.c)
 *     ValidateAcpiCPCRegister @ 0x1C002CFB0 (ValidateAcpiCPCRegister.c)
 */

__int64 __fastcall ValidateAcpiCPC(int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // ecx
  bool v6; // cc
  __int64 result; // rax
  unsigned int v8; // ebp
  _BYTE *v9; // rdi
  unsigned int v10; // esi
  _BYTE *v11; // rcx

  v3 = a1[1];
  if ( v3 == 1 )
  {
    v5 = *a1;
    if ( v5 != 17 )
      goto LABEL_8;
  }
  v6 = v3 <= 2;
  if ( v3 == 2 )
  {
    v5 = *a1;
    if ( *a1 != 21 )
      goto LABEL_8;
    v6 = 1;
  }
  if ( !v6 )
  {
    v5 = *a1;
    if ( (unsigned int)*a1 < 0x15 )
    {
LABEL_8:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x33u,
          (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
          KeGetPcr()->Prcb.Number,
          v5);
      return 3221225473LL;
    }
  }
  v8 = 15;
  v9 = &unk_1C0011351;
  if ( v3 != 1 )
    v8 = 19;
  v10 = 0;
  if ( v3 != 1 )
    v9 = &unk_1C0011121;
  while ( 1 )
  {
    LOBYTE(a3) = *v9;
    LOBYTE(a2) = *(v9 - 1);
    result = ValidateAcpiCPCRegister((char *)a1 + *(unsigned int *)(v9 - 17), a2, a3, *(_QWORD *)(v9 - 9));
    if ( (int)result < 0 )
      break;
    ++v10;
    v9 += 24;
    if ( v10 >= v8 )
    {
      if ( CpcRegisterIsSupported((__int64)(a1 + 17)) || *v11 == 126 || *((_QWORD *)a1 + 9) == 1LL )
        return 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x34u,
          (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
          KeGetPcr()->Prcb.Number);
      return 3221225473LL;
    }
  }
  return result;
}
