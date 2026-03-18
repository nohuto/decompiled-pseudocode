/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1C008E450
 * Callers:
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0016CC0 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     PnpiCmResourceToBiosIrq @ 0x1C008E64C (PnpiCmResourceToBiosIrq.c)
 *     PnpiCmResourceToBiosIoPort @ 0x1C008E6AC (PnpiCmResourceToBiosIoPort.c)
 *     PnpiCmResourceToBiosAddress @ 0x1C00B093C (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1C00B0A24 (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1C00B0B04 (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00B0BC4 (PnpiCmResourceToBiosExtendedIrq.c)
 *     PnpiCmResourceToBiosGpioInterruptIoDescriptor @ 0x1C00B0CB4 (PnpiCmResourceToBiosGpioInterruptIoDescriptor.c)
 *     PnpiCmResourceToBiosIoFixedPort @ 0x1C00B0D0C (PnpiCmResourceToBiosIoFixedPort.c)
 *     PnpiCmResourceToBiosMemory @ 0x1C00B0D5C (PnpiCmResourceToBiosMemory.c)
 *     PnpiCmResourceToBiosMemory32Fixed @ 0x1C00B0DC8 (PnpiCmResourceToBiosMemory32Fixed.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // bp
  unsigned int v5; // esi
  __int64 v6; // r13
  signed int v9; // ebx
  unsigned __int64 i; // rdi
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r8
  signed int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  _BYTE *v19; // rdx
  char v21; // al
  __int16 v22; // cx
  char v23; // al
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // r8d
  char v29; // cl
  unsigned int v30; // edx
  _BYTE *v31; // rax
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  unsigned __int16 v35; // [rsp+90h] [rbp+18h]

  v4 = *a3;
  v5 = 0;
  v6 = a4;
  v9 = 0;
  for ( i = (unsigned __int64)a3; ; v4 = *(_BYTE *)i )
  {
    if ( (v4 & 0x80u) != 0 )
    {
      if ( i >= (unsigned __int64)&a3[v6 - 2] )
        goto LABEL_27;
      v11 = 11;
      v12 = *(_WORD *)(i + 1) + 3;
    }
    else
    {
      v11 = 10;
      v12 = (v4 & 7) + 1;
      v4 &= 0x78u;
    }
    v35 = v12;
    LODWORD(v33) = v12;
    LODWORD(v32) = v4;
    WPP_RECORDER_SF_LL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      v11,
      (__int64)&WPP_037c60bd098b351051f2aa0410f4e431_Traceguids,
      v32,
      v33);
    if ( v4 == 120 )
      break;
    if ( v4 > 0x85u )
    {
      switch ( v4 )
      {
        case 0x86u:
          if ( (unsigned __int64)&a3[v6 - i] < 0xC )
            return (unsigned int)-1072431089;
          v13 = PnpiCmResourceToBiosMemory32Fixed(i, a2);
          goto LABEL_14;
        case 0x87u:
          if ( (unsigned __int64)&a3[v6 - i] < 0x1A )
            return (unsigned int)-1072431089;
          v13 = PnpiCmResourceToBiosAddressDouble(i, a2);
          goto LABEL_14;
        case 0x88u:
          if ( (unsigned __int64)&a3[v6 - i] < 0x10 )
            return (unsigned int)-1072431089;
          v13 = PnpiCmResourceToBiosAddress(i, a2);
          goto LABEL_14;
        case 0x89u:
          if ( (unsigned __int64)&a3[v6 - i] < 9 )
            return (unsigned int)-1072431089;
          v13 = PnpiCmResourceToBiosExtendedIrq(a1, i, a2);
          goto LABEL_14;
        case 0x8Au:
          if ( (unsigned __int64)&a3[v6 - i] < 0x2E )
            return (unsigned int)-1072431089;
          v13 = PnpiCmResourceToBiosAddressQuad(i, a2);
          goto LABEL_14;
        case 0x8Cu:
          if ( (unsigned __int64)&a3[v6 - i] < 0x17 )
            return (unsigned int)-1072431089;
          v13 = PnpiCmResourceToBiosGpioInterruptIoDescriptor(i, a2);
          goto LABEL_14;
        case 0x8Eu:
          if ( (unsigned __int64)&a3[v6 - i] < 0xC )
            return (unsigned int)-1072431089;
          v28 = *(_DWORD *)(a2 + 16);
          v29 = 0;
          v30 = 0;
          if ( v28 )
          {
            v31 = (_BYTE *)(a2 + 20);
            while ( *v31 != 0x84 )
            {
              ++v30;
              v31 += 20;
              if ( v30 >= v28 )
                goto LABEL_75;
            }
            v29 = 1;
            *v31 = 0;
          }
LABEL_75:
          v9 = v29 == 0 ? 0xC0000001 : 0;
          goto LABEL_15;
      }
LABEL_73:
      LODWORD(v32) = v4;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xEu,
        0xDu,
        (__int64)&WPP_037c60bd098b351051f2aa0410f4e431_Traceguids,
        v32);
      goto LABEL_15;
    }
    switch ( v4 )
    {
      case 0x85u:
        if ( (unsigned __int64)&a3[v6 - i] < 0x14 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(i + 3) = 0;
        v24 = 0;
        *(_QWORD *)(i + 4) = 0LL;
        *(_QWORD *)(i + 12) = 0LL;
        v25 = *(_DWORD *)(a2 + 16);
        if ( v25 )
        {
          v26 = a2 + 20;
          while ( *(_BYTE *)v26 != 3 )
          {
            ++v24;
            v26 += 20LL;
            if ( v24 >= v25 )
              goto LABEL_23;
          }
          *(_DWORD *)(i + 16) = *(_DWORD *)(v26 + 12);
          v27 = *(_DWORD *)(v26 + 4);
          *(_DWORD *)(i + 8) = v27;
          *(_DWORD *)(i + 4) = v27;
          *(_BYTE *)(i + 3) = (*(_BYTE *)(v26 + 2) & 1) == 0;
          *(_BYTE *)v26 = 0;
        }
        goto LABEL_23;
      case 0x20u:
        if ( (unsigned __int64)&a3[v6 - i] < 4 )
          return (unsigned int)-1072431089;
        v13 = PnpiCmResourceToBiosIrq(i, a2);
        goto LABEL_14;
      case 0x28u:
        if ( (unsigned __int64)&a3[v6 - i] < 3 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(i + 1) = 0;
        v14 = 0;
        v15 = *(_DWORD *)(a2 + 16);
        if ( v15 )
        {
          v16 = a2 + 20;
          while ( *(_BYTE *)v16 != 4 )
          {
            ++v14;
            v16 += 20LL;
            if ( v14 >= v15 )
              goto LABEL_23;
          }
          v21 = 0;
          *(_BYTE *)(i + 1) = 1 << *(_DWORD *)(v16 + 4);
          *(_BYTE *)(i + 2) = 0;
          v22 = *(_WORD *)(v16 + 2);
          if ( (v22 & 8) != 0 )
          {
            *(_BYTE *)(i + 2) = 4;
            v21 = 4;
            v22 = *(_WORD *)(v16 + 2);
          }
          if ( (v22 & 0x10) != 0 )
          {
            v23 = v21 | 0x20;
            goto LABEL_51;
          }
          if ( (v22 & 0x20) != 0 )
          {
            v23 = v21 | 0x40;
            goto LABEL_51;
          }
          if ( (v22 & 0x40) != 0 )
          {
            v23 = v21 | 0x60;
LABEL_51:
            *(_BYTE *)(i + 2) = v23;
          }
          *(_BYTE *)v16 = 0;
        }
LABEL_23:
        v9 = 0;
        goto LABEL_16;
    }
    if ( v4 != 48 && v4 != 56 )
    {
      if ( v4 == 64 )
      {
        if ( (unsigned __int64)&a3[v6 - i] < 8 )
          return (unsigned int)-1072431089;
        v13 = PnpiCmResourceToBiosIoPort(i, a2);
LABEL_14:
        v9 = v13;
        goto LABEL_15;
      }
      if ( v4 == 72 )
      {
        if ( (unsigned __int64)&a3[v6 - i] < 4 )
          return (unsigned int)-1072431089;
        v13 = PnpiCmResourceToBiosIoFixedPort(i, a2);
        goto LABEL_14;
      }
      if ( v4 != 112 )
      {
        if ( v4 == 129 )
        {
          if ( (unsigned __int64)&a3[v6 - i] < 0xC )
            return (unsigned int)-1072431089;
          v13 = PnpiCmResourceToBiosMemory(i, a2);
          goto LABEL_14;
        }
        goto LABEL_73;
      }
    }
LABEL_15:
    if ( v9 < 0 )
      return (unsigned int)v9;
LABEL_16:
    i += v35;
    if ( i >= (unsigned __int64)&a3[v6] )
      goto LABEL_27;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xEu,
    0xCu,
    (__int64)&WPP_037c60bd098b351051f2aa0410f4e431_Traceguids);
LABEL_27:
  v17 = *(_DWORD *)(a2 + 16);
  v18 = 0;
  if ( v17 )
  {
    v19 = (_BYTE *)(a2 + 20);
    do
    {
      if ( !*v19 )
        break;
      ++v18;
      v19 += 20;
    }
    while ( v18 < v17 );
  }
  if ( v18 == v17 )
    return (unsigned int)-1073741823;
  return v5;
}
