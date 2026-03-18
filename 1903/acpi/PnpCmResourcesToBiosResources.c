/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1C00A215C
 * Callers:
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LL @ 0x1C000CB74 (WPP_RECORDER_SF_LL.c)
 *     PnpiCmResourceToBiosIrq @ 0x1C00A237C (PnpiCmResourceToBiosIrq.c)
 *     PnpiCmResourceToBiosIoPort @ 0x1C00A23DC (PnpiCmResourceToBiosIoPort.c)
 *     PnpiCmResourceToBiosAddress @ 0x1C00B42B4 (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1C00B439C (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1C00B447C (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00B453C (PnpiCmResourceToBiosExtendedIrq.c)
 *     PnpiCmResourceToBiosGpioInterruptIoDescriptor @ 0x1C00B4628 (PnpiCmResourceToBiosGpioInterruptIoDescriptor.c)
 *     PnpiCmResourceToBiosIoFixedPort @ 0x1C00B4680 (PnpiCmResourceToBiosIoFixedPort.c)
 *     PnpiCmResourceToBiosMemory @ 0x1C00B46D0 (PnpiCmResourceToBiosMemory.c)
 *     PnpiCmResourceToBiosMemory32Fixed @ 0x1C00B473C (PnpiCmResourceToBiosMemory32Fixed.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // bp
  unsigned int v5; // esi
  signed int v6; // ebx
  __int64 v7; // r14
  __int64 v10; // r10
  unsigned __int64 v11; // rdi
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // r9
  signed int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  _BYTE *v20; // rdx
  char v22; // al
  __int16 v23; // cx
  char v24; // al
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // r8d
  char v30; // cl
  unsigned int v31; // edx
  _BYTE *v32; // rax
  __int64 v33; // [rsp+28h] [rbp-40h]
  __int64 v34; // [rsp+30h] [rbp-38h]

  v4 = *a3;
  v5 = 0;
  v6 = 0;
  v7 = a4;
  v10 = a1;
  v11 = (unsigned __int64)a3;
  while ( 1 )
  {
    if ( (v4 & 0x80u) == 0 )
    {
      v12 = (v4 & 7) + 1;
      v4 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v13 = 10;
      goto LABEL_5;
    }
    if ( v11 >= (unsigned __int64)&a3[v7 - 2] )
      goto LABEL_30;
    v12 = *(_WORD *)(v11 + 1) + 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 11;
LABEL_5:
      LODWORD(v34) = v12;
      LODWORD(v33) = v4;
      WPP_RECORDER_SF_LL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        v13,
        (__int64)&WPP_13fa07d7be9f3627efc632aa276df393_Traceguids,
        v33,
        v34);
      v10 = a1;
    }
LABEL_6:
    if ( v4 == 120 )
      break;
    if ( v4 > 0x85u )
    {
      switch ( v4 )
      {
        case 0x86u:
          if ( (unsigned __int64)&a3[v7 - v11] < 0xC )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosMemory32Fixed(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_16;
        case 0x87u:
          if ( (unsigned __int64)&a3[v7 - v11] < 0x1A )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddressDouble(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_16;
        case 0x88u:
          if ( (unsigned __int64)&a3[v7 - v11] < 0x10 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddress(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_16;
        case 0x89u:
          if ( (unsigned __int64)&a3[v7 - v11] < 9 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosExtendedIrq(v10, v11, a2, 1LL);
          goto LABEL_16;
        case 0x8Au:
          if ( (unsigned __int64)&a3[v7 - v11] < 0x2E )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddressQuad(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_16;
        case 0x8Cu:
          if ( (unsigned __int64)&a3[v7 - v11] < 0x17 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosGpioInterruptIoDescriptor(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_16;
        case 0x8Du:
          return (unsigned int)((unsigned __int64)&a3[v7 - v11] < 0x12 ? -1072431089 : -1073741822);
        case 0x8Eu:
          if ( (unsigned __int64)&a3[v7 - v11] < 0xC )
            return (unsigned int)-1072431089;
          v29 = *(_DWORD *)(a2 + 16);
          v30 = 0;
          v31 = 0;
          if ( v29 )
          {
            v32 = (_BYTE *)(a2 + 20);
            while ( *v32 != 0x84 )
            {
              ++v31;
              v32 += 20;
              if ( v31 >= v29 )
                goto LABEL_81;
            }
            v30 = 1;
            *v32 = 0;
          }
LABEL_81:
          v6 = v30 == 0 ? 0xC0000001 : 0;
          goto LABEL_17;
      }
LABEL_78:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v33) = v4;
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xEu,
          0xDu,
          (__int64)&WPP_13fa07d7be9f3627efc632aa276df393_Traceguids,
          v33);
      }
      goto LABEL_17;
    }
    switch ( v4 )
    {
      case 0x85u:
        if ( (unsigned __int64)&a3[v7 - v11] < 0x14 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 3) = 0;
        v25 = 0;
        *(_QWORD *)(v11 + 4) = 0LL;
        *(_QWORD *)(v11 + 12) = 0LL;
        v26 = *(_DWORD *)(a2 + 16);
        if ( v26 )
        {
          v27 = a2 + 20;
          while ( *(_BYTE *)v27 != 3 )
          {
            ++v25;
            v27 += 20LL;
            if ( v25 >= v26 )
              goto LABEL_25;
          }
          *(_DWORD *)(v11 + 16) = *(_DWORD *)(v27 + 12);
          v28 = *(_DWORD *)(v27 + 4);
          *(_DWORD *)(v11 + 8) = v28;
          *(_DWORD *)(v11 + 4) = v28;
          *(_BYTE *)(v11 + 3) = (*(_BYTE *)(v27 + 2) & 1) == 0;
          *(_BYTE *)v27 = 0;
        }
        goto LABEL_25;
      case 0x20u:
        if ( (unsigned __int64)&a3[v7 - v11] < 4 )
          return (unsigned int)-1072431089;
        v14 = PnpiCmResourceToBiosIrq(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
        goto LABEL_16;
      case 0x28u:
        if ( (unsigned __int64)&a3[v7 - v11] < 3 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 1) = 0;
        v15 = 0;
        v16 = *(_DWORD *)(a2 + 16);
        if ( v16 )
        {
          v17 = a2 + 20;
          while ( *(_BYTE *)v17 != 4 )
          {
            ++v15;
            v17 += 20LL;
            if ( v15 >= v16 )
              goto LABEL_25;
          }
          v22 = 0;
          *(_BYTE *)(v11 + 1) = 1 << *(_DWORD *)(v17 + 4);
          *(_BYTE *)(v11 + 2) = 0;
          v23 = *(_WORD *)(v17 + 2);
          if ( (v23 & 8) != 0 )
          {
            *(_BYTE *)(v11 + 2) = 4;
            v22 = 4;
            v23 = *(_WORD *)(v17 + 2);
          }
          if ( (v23 & 0x10) != 0 )
          {
            v24 = v22 | 0x20;
            goto LABEL_55;
          }
          if ( (v23 & 0x20) != 0 )
          {
            v24 = v22 | 0x40;
            goto LABEL_55;
          }
          if ( (v23 & 0x40) != 0 )
          {
            v24 = v22 | 0x60;
LABEL_55:
            *(_BYTE *)(v11 + 2) = v24;
          }
          *(_BYTE *)v17 = 0;
        }
LABEL_25:
        v6 = 0;
        goto LABEL_18;
    }
    if ( v4 != 48 && v4 != 56 )
    {
      if ( v4 == 64 )
      {
        if ( (unsigned __int64)&a3[v7 - v11] < 8 )
          return (unsigned int)-1072431089;
        v14 = PnpiCmResourceToBiosIoPort(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
LABEL_16:
        v6 = v14;
        goto LABEL_17;
      }
      if ( v4 == 72 )
      {
        if ( (unsigned __int64)&a3[v7 - v11] < 4 )
          return (unsigned int)-1072431089;
        v14 = PnpiCmResourceToBiosIoFixedPort(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
        goto LABEL_16;
      }
      if ( v4 != 112 )
      {
        if ( v4 == 129 )
        {
          if ( (unsigned __int64)&a3[v7 - v11] < 0xC )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosMemory(v11, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_16;
        }
        goto LABEL_78;
      }
    }
LABEL_17:
    if ( v6 < 0 )
      return (unsigned int)v6;
LABEL_18:
    v11 += v12;
    if ( v11 >= (unsigned __int64)&a3[v7] )
      goto LABEL_30;
    v4 = *(_BYTE *)v11;
    v10 = a1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0xCu,
      (__int64)&WPP_13fa07d7be9f3627efc632aa276df393_Traceguids);
LABEL_30:
  v18 = *(_DWORD *)(a2 + 16);
  v19 = 0;
  if ( v18 )
  {
    v20 = (_BYTE *)(a2 + 20);
    do
    {
      if ( !*v20 )
        break;
      ++v19;
      v20 += 20;
    }
    while ( v19 < v18 );
  }
  if ( v19 == v18 )
    return (unsigned int)-1073741823;
  return v5;
}
