/*
 * XREFs of ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC
 * Callers:
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002D884 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C00968FC (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIIsNamedChildPresent @ 0x1C001ED60 (AMLIIsNamedChildPresent.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008F078 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C008F190 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C0096F84 (ACPIFreePhysicalDeviceLocationDescriptor.c)
 *     ACPIInsertPhysicalDeviceLocationDescriptor @ 0x1C009FC7C (ACPIInsertPhysicalDeviceLocationDescriptor.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C009FF50 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocation(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  int v11; // ebx
  unsigned int *v13; // r12
  int v14; // eax
  unsigned int v15; // r15d
  int v16; // eax
  _QWORD *i; // rax
  _QWORD v18[5]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v19[5]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+D8h] [rbp+67h] BYREF

  v20 = 0LL;
  v6 = 0LL;
  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  v10 = (__int64 *)a1[89];
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
  if ( !v10 || !AMLIIsNamedChildPresent(v10, 1145851999) )
  {
    v11 = -1073741823;
    goto LABEL_8;
  }
  v11 = ACPIGet(a1, 1145851999, 268566528, 0LL, 0, 0LL, 0LL, (__int64)v19, 0LL);
  if ( v11 < 0 )
    goto LABEL_10;
  if ( WORD1(v19[0]) == 3 )
  {
    if ( a2 )
    {
      v11 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v19, (_DWORD *)a2);
      if ( v11 < 0 )
        goto LABEL_10;
    }
    if ( !a3 )
      goto LABEL_10;
    v11 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v20);
    if ( v11 >= 0 )
    {
      v6 = v20;
      if ( a2 )
      {
LABEL_29:
        ACPIInsertPhysicalDeviceLocationDescriptor(a3, v6);
        v6 = 0LL;
        goto LABEL_30;
      }
      v14 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v19, (_DWORD *)(v20 + 16));
LABEL_28:
      v11 = v14;
      if ( v14 < 0 )
        goto LABEL_8;
      goto LABEL_29;
    }
LABEL_32:
    v6 = v20;
    goto LABEL_8;
  }
  if ( WORD1(v19[0]) != 4 )
    goto LABEL_39;
  v13 = (unsigned int *)v19[4];
  if ( !*(_DWORD *)v19[4] )
    goto LABEL_39;
  v11 = AMLIEvalPkgDataElement((__int64)v19, 0, v18);
  if ( v11 < 0 )
    goto LABEL_10;
  if ( WORD1(v18[0]) == 3 )
  {
    if ( a2 )
    {
      v11 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v18, (_DWORD *)a2);
      if ( v11 < 0 )
        goto LABEL_10;
    }
    if ( !a3 )
      goto LABEL_10;
    v11 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v20);
    if ( v11 >= 0 )
    {
      v6 = v20;
      if ( !a2 )
      {
        v11 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v18, (_DWORD *)(v20 + 16));
        if ( v11 < 0 )
        {
LABEL_8:
          if ( v6 )
            ACPIFreePhysicalDeviceLocationDescriptor((char *)v6);
          goto LABEL_10;
        }
      }
      v14 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v19, 0LL, v6);
      goto LABEL_28;
    }
    goto LABEL_32;
  }
  if ( WORD1(v18[0]) != 4 )
  {
LABEL_39:
    v11 = -1073741823;
    goto LABEL_10;
  }
  if ( !a3 )
  {
    if ( a2 )
      v11 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v18, a2, 0LL);
    goto LABEL_10;
  }
  v15 = 0;
  do
  {
    v16 = ACPICreatePhysicalDeviceLocationDescriptor(0LL, &v20);
    v6 = v20;
    v11 = v16;
    if ( v16 < 0 )
      break;
    v11 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v18, v20 + 16, v20);
    if ( v11 < 0 )
      break;
    if ( !v15 && a2 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v6 + 16);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 32);
    }
    ACPIInsertPhysicalDeviceLocationDescriptor(a3, v6);
    ++v15;
    v6 = 0LL;
    v20 = 0LL;
    if ( v15 >= *v13 )
      break;
    AMLIFreeDataBuffs((__int64)v18, v7, v8, v9);
    v11 = AMLIEvalPkgDataElement((__int64)v19, v15, v18);
    if ( v11 < 0 )
      break;
  }
  while ( WORD1(v18[0]) == 4 );
  if ( v11 < 0 )
    goto LABEL_8;
LABEL_30:
  if ( a3[2] || (_QWORD *)a3[5] != a3 + 5 )
    goto LABEL_8;
  for ( i = (_QWORD *)a3[3]; i != a3 + 3; i = (_QWORD *)*i )
  {
    v7 = (__int64)(i - 9);
    if ( a3[2] )
    {
      a3[2] = 0LL;
      break;
    }
    a3[2] = v7;
  }
LABEL_10:
  if ( v18[4] )
    AMLIFreeDataBuffs((__int64)v18, v7, v8, v9);
  if ( v19[4] )
    AMLIFreeDataBuffs((__int64)v19, v7, v8, v9);
  return (unsigned int)v11;
}
