/*
 * XREFs of PnpIoResourceListToCmResourceList @ 0x1C0093518
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C00940E0 (ACPIBusIrpQueryResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1010 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B6244 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall PnpIoResourceListToCmResourceList(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx

  *a2 = 0LL;
  if ( !a1 )
    return 3221225488LL;
  v4 = a1 + 8;
  if ( a1 == (_DWORD *)-32LL )
    return 3221225488LL;
  v5 = a1[9];
  if ( !v5 )
    return 3221225488LL;
  v6 = 20 * (v5 + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x52706341u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v6);
  *v8 = 1;
  v9 = 0;
  v8[1] = a1[1];
  v8[2] = a1[2];
  v8[3] = 65537;
  for ( v8[4] = v4[1]; v9 < v4[1]; ++v9 )
  {
    v10 = 5LL * v9;
    v11 = 8LL * v9;
    v12 = BYTE1(v4[v11 + 2]);
    LOBYTE(v8[v10 + 5]) = v12;
    BYTE1(v8[v10 + 5]) = BYTE2(v4[v11 + 2]);
    HIWORD(v8[v10 + 5]) = v4[v11 + 3];
    switch ( v12 )
    {
      case 1:
        goto LABEL_7;
      case 2:
        LOWORD(v8[5 * v9 + 6]) = v4[v11 + 4];
        v8[5 * v9 + 7] = v4[v11 + 4];
        *(_QWORD *)&v8[5 * v9 + 8] = 0xFFFFFFFFLL;
        HIWORD(v8[5 * v9 + 6]) = 0;
        continue;
      case 3:
        goto LABEL_7;
      case 4:
        if ( SLOBYTE(v4[v11 + 3]) < 0 )
        {
          v8[5 * v9 + 6] = v4[v11 + 6];
          v8[5 * v9 + 7] = v4[v11 + 4];
          LOBYTE(v8[5 * v9 + 8]) = v4[v11 + 7];
        }
        else
        {
          *(_QWORD *)&v8[5 * v9 + 6] = (unsigned int)v4[v11 + 4];
        }
        continue;
      case 6:
        v8[5 * v9 + 6] = v4[v11 + 5];
        v8[5 * v9 + 7] = v4[v11 + 4];
        continue;
      case 7:
LABEL_7:
        v8[5 * v9 + 8] = v4[v11 + 4];
        *(_QWORD *)&v8[5 * v9 + 6] = *(_QWORD *)&v4[v11 + 6];
        break;
      default:
        v8[5 * v9 + 6] = v4[v11 + 4];
        v8[5 * v9 + 7] = v4[v11 + 5];
        v8[5 * v9 + 8] = v4[v11 + 6];
        break;
    }
  }
  *a2 = v8;
  return 0LL;
}
