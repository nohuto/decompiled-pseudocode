/*
 * XREFs of HUBDESC_GetNextMsOs20Descriptor @ 0x1C003569C
 * Callers:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x1C002C278 (HUBMISC_InstallMsOs20RegistryProperties.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C0035810 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C0035A80 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C0036558 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBDESC_GetNextMsOs20Descriptor(unsigned __int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  char v3; // r9
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  bool v6; // cf
  unsigned __int16 *v7; // rax

  v2 = *a2;
  v3 = 1;
  v4 = (*a2)[1];
  if ( v4 == 2 || v4 == 1 )
  {
    if ( *v2 < 8u )
      goto LABEL_12;
    v5 = v2[3];
    v6 = v5 < 0xCu;
  }
  else
  {
    v5 = *v2;
    v6 = *v2 < 4u;
  }
  if ( v6 )
    goto LABEL_12;
  v7 = (unsigned __int16 *)((char *)v2 + v5);
  if ( v7 == (unsigned __int16 *)a1 )
  {
LABEL_13:
    *a2 = 0LL;
    return v3;
  }
  if ( (unsigned __int64)v7 > a1 || (unsigned __int64)(v7 + 2) > a1 || (unsigned __int64)v7 + *v7 > a1 )
  {
LABEL_12:
    v3 = 0;
    goto LABEL_13;
  }
  *a2 = v7;
  return v3;
}
