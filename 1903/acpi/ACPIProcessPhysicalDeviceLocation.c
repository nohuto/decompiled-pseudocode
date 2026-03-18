/*
 * XREFs of ACPIProcessPhysicalDeviceLocation @ 0x1C0097100
 * Callers:
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002D980 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0094FAC (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIIsNamedChildPresent @ 0x1C0015950 (AMLIIsNamedChildPresent.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C0091DA8 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C00932E8 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C0093380 (ACPIFreePhysicalDeviceLocationDescriptor.c)
 *     ACPIInsertPhysicalDeviceLocationDescriptor @ 0x1C00A284C (ACPIInsertPhysicalDeviceLocationDescriptor.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C00A2C3C (ACPICreatePhysicalDeviceLocationDescriptor.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocation(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 *v7; // rbx
  int v8; // ebx
  unsigned int *v10; // r12
  int v11; // eax
  unsigned int v12; // r15d
  int v13; // eax
  _QWORD *i; // rax
  _QWORD v15[5]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v16[5]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+D8h] [rbp+67h] BYREF

  v17 = 0LL;
  v6 = 0LL;
  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v7 = (__int64 *)a1[89];
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
  }
  if ( a3 )
  {
    memset(a3, 0, 0x48uLL);
    a3[1] = a3;
    *a3 = a3;
    a3[4] = a3 + 3;
    a3[3] = a3 + 3;
    a3[6] = a3 + 5;
    a3[5] = a3 + 5;
  }
  if ( !v7 || !AMLIIsNamedChildPresent(v7, 1145851999) )
  {
    v8 = -1073741823;
    goto LABEL_8;
  }
  v8 = ACPIGet(a1, 1145851999, 268566528, 0LL, 0, 0LL, 0LL, (__int64)v16, 0LL);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( WORD1(v16[0]) == 3 )
  {
    if ( a2 )
    {
      v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v16, (_DWORD *)a2);
      if ( v8 < 0 )
        goto LABEL_10;
    }
    if ( !a3 )
      goto LABEL_10;
    v8 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v17);
    if ( v8 >= 0 )
    {
      v6 = v17;
      if ( a2 )
      {
LABEL_29:
        ACPIInsertPhysicalDeviceLocationDescriptor(a3, v6);
        v6 = 0LL;
        goto LABEL_30;
      }
      v11 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v16, (_DWORD *)(v17 + 16));
LABEL_28:
      v8 = v11;
      if ( v11 < 0 )
        goto LABEL_8;
      goto LABEL_29;
    }
LABEL_32:
    v6 = v17;
    goto LABEL_8;
  }
  if ( WORD1(v16[0]) != 4 )
    goto LABEL_39;
  v10 = (unsigned int *)v16[4];
  if ( !*(_DWORD *)v16[4] )
    goto LABEL_39;
  v8 = AMLIEvalPkgDataElement((__int64)v16, 0, v15);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( WORD1(v15[0]) == 3 )
  {
    if ( a2 )
    {
      v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v15, (_DWORD *)a2);
      if ( v8 < 0 )
        goto LABEL_10;
    }
    if ( !a3 )
      goto LABEL_10;
    v8 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v17);
    if ( v8 >= 0 )
    {
      v6 = v17;
      if ( !a2 )
      {
        v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v15, (_DWORD *)(v17 + 16));
        if ( v8 < 0 )
        {
LABEL_8:
          if ( v6 )
            ACPIFreePhysicalDeviceLocationDescriptor((char *)v6);
          goto LABEL_10;
        }
      }
      v11 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v16, 0LL, v6);
      goto LABEL_28;
    }
    goto LABEL_32;
  }
  if ( WORD1(v15[0]) != 4 )
  {
LABEL_39:
    v8 = -1073741823;
    goto LABEL_10;
  }
  if ( !a3 )
  {
    if ( a2 )
      v8 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v15, a2, 0LL);
    goto LABEL_10;
  }
  v12 = 0;
  do
  {
    v13 = ACPICreatePhysicalDeviceLocationDescriptor(0LL, &v17);
    v6 = v17;
    v8 = v13;
    if ( v13 < 0 )
      break;
    v8 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v15, v17 + 16, v17);
    if ( v8 < 0 )
      break;
    if ( !v12 && a2 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v6 + 16);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 32);
    }
    ACPIInsertPhysicalDeviceLocationDescriptor(a3, v6);
    ++v12;
    v6 = 0LL;
    v17 = 0LL;
    if ( v12 >= *v10 )
      break;
    AMLIFreeDataBuffs(v15);
    v8 = AMLIEvalPkgDataElement((__int64)v16, v12, v15);
    if ( v8 < 0 )
      break;
  }
  while ( WORD1(v15[0]) == 4 );
  if ( v8 < 0 )
    goto LABEL_8;
LABEL_30:
  if ( a3[2] || (_QWORD *)a3[5] != a3 + 5 )
    goto LABEL_8;
  for ( i = (_QWORD *)a3[3]; i != a3 + 3; i = (_QWORD *)*i )
  {
    if ( a3[2] )
    {
      a3[2] = 0LL;
      break;
    }
    a3[2] = i - 9;
  }
LABEL_10:
  if ( v15[4] )
    AMLIFreeDataBuffs(v15);
  if ( v16[4] )
    AMLIFreeDataBuffs(v16);
  return (unsigned int)v8;
}
