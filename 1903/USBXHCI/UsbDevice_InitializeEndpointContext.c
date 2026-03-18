/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x1C003B188
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000583C (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003B4BC (UsbDevice_ReconfigureEndpoint.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C0018FFC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C001903C (Endpoint_GetMaxPrimaryStreams.c)
 */

unsigned int __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r8d
  char v7; // al
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned __int8 v12; // cl
  int v13; // eax
  int v14; // edx
  char v15; // cl
  unsigned __int8 v16; // al
  int v17; // ecx
  int v18; // eax
  int v19; // r10d
  char v20; // cl
  char v21; // al
  int v22; // ecx
  int MaxPrimaryStreams; // eax
  _DWORD *v24; // r11
  __int64 v25; // rcx
  __int64 DequeuePointer; // rax
  __int64 v27; // r11
  int v28; // r10d
  __int16 v29; // cx
  unsigned int v30; // r10d
  unsigned int result; // eax
  signed __int64 v32[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_DWORD *)(a3 + 4) ^= (*(_DWORD *)(a3 + 4) ^ (8 * *(_DWORD *)(a2 + 120))) & 0x38;
  *(_WORD *)(a3 + 6) = *(_WORD *)(a2 + 100) & 0x7FF;
  v7 = *(_BYTE *)(a2 + 99) & 3;
  *(_OWORD *)v32 = *(_OWORD *)(*(_QWORD *)a2 + 336LL);
  if ( v7 == 1
    || ((v7 == 3) & _bittest64(v32, 0x34u)) != 0
    && *(char *)(a2 + 98) < 0
    && (v8 = *(_QWORD *)(a2 + 16), *(_WORD *)(v8 + 124) == 1529)
    && *(_WORD *)(v8 + 126) == 4353
    && *(_DWORD *)(v8 + 36) > 1u )
  {
    v9 = 0;
  }
  else
  {
    v9 = 6;
  }
  v10 = v9 | *(_DWORD *)(a3 + 4) & 0xFFFFFFF9;
  *(_DWORD *)(a3 + 4) = v10;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_BYTE *)(a2 + 102);
  switch ( v11 )
  {
    case 0:
      if ( (((v10 & 0x38) - 24) & 0xFFFFFFDF) != 0 )
      {
        LOWORD(v13) = *(_WORD *)(a3 + 6);
      }
      else
      {
        if ( v12 >= 0x10u )
          *(_BYTE *)(a3 + 2) = 8 - (v12 < 0x20u);
        else
          *(_BYTE *)(a3 + 2) = 6;
        v5 = *(unsigned __int16 *)(a3 + 6);
        *(_WORD *)(a3 + 18) = v5;
        LOWORD(v13) = v5;
        *(_BYTE *)(a3 + 3) = 0;
      }
      v13 = (unsigned __int16)v13;
      goto LABEL_33;
    case 1:
      v14 = v10 & 0x38;
      if ( ((v14 - 24) & 0xFFFFFFDF) != 0 )
      {
        if ( ((v14 - 8) & 0xFFFFFFDF) != 0 )
        {
LABEL_32:
          v13 = *(unsigned __int16 *)(a3 + 6);
LABEL_33:
          *(_DWORD *)(a2 + 152) = v13;
          break;
        }
        *(_WORD *)(a3 + 2) = 3;
      }
      else
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 4u )
          {
            if ( v12 >= 8u )
            {
              if ( v12 >= 0x10u )
                *(_BYTE *)(a3 + 2) = 8 - (v12 < 0x20u);
              else
                *(_BYTE *)(a3 + 2) = 6;
            }
            else
            {
              *(_BYTE *)(a3 + 2) = 5;
            }
          }
          else
          {
            *(_BYTE *)(a3 + 2) = 4;
          }
        }
        else
        {
          *(_BYTE *)(a3 + 2) = 3;
        }
        *(_BYTE *)(a3 + 3) = 0;
      }
      v5 = *(unsigned __int16 *)(a3 + 6);
      *(_WORD *)(a3 + 18) = v5;
      goto LABEL_32;
    case 2:
      if ( (((v10 & 0x38) - 8) & 0xFFFFFFCF) != 0 )
      {
        LOBYTE(v17) = *(_BYTE *)(a3 + 5);
        LOWORD(v18) = *(_WORD *)(a3 + 6);
      }
      else
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            v15 = 5;
          else
            v15 = v12 - 1;
        }
        else
        {
          v15 = 0;
        }
        *(_BYTE *)(a3 + 2) = v15;
        v16 = (*(_WORD *)(a2 + 100) >> 11) & 3;
        *(_BYTE *)(a3 + 3) = 0;
        v17 = v16;
        v18 = *(unsigned __int16 *)(a3 + 6);
        *(_BYTE *)(a3 + 5) = v17;
        v5 = v18 * (v17 + 1);
        *(_WORD *)(a3 + 18) = v18 * (v17 + 1);
      }
      *(_DWORD *)(a2 + 152) = (unsigned __int16)v18 * ((unsigned __int8)v17 + 1);
      break;
    case 3:
      v19 = v10 & 0x38;
      if ( ((v19 - 24) & 0xFFFFFFCF) == 0 && v19 != 72 || v19 == 8 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            v20 = 5;
          else
            v20 = v12 - 1;
        }
        else
        {
          v20 = 0;
        }
        *(_BYTE *)(a3 + 2) = v20;
        v21 = *(_BYTE *)(a2 + 106);
        if ( v21 >= 0 )
        {
          v5 = *(unsigned __int16 *)(a2 + 107);
          *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ ((unsigned __int8)v21 << 8)) & 0x300;
        }
        else
        {
          v5 = *(_DWORD *)(a2 + 113);
          *(_DWORD *)a3 &= 0xFFFFFCFF;
        }
        *(_WORD *)(a3 + 18) = v5;
        *(_BYTE *)(a3 + 3) = BYTE2(v5);
      }
      if ( (((v10 & 0x38) - 8) & 0xFFFFFFDF) != 0 )
        v22 = *(unsigned __int16 *)(a3 + 6) * (*(unsigned __int8 *)(a3 + 5) + 1);
      else
        v22 = v5;
      *(_DWORD *)(a2 + 152) = v22;
      *(_BYTE *)(a3 + 5) = *(_BYTE *)(a2 + 105);
      break;
  }
  if ( *(_BYTE *)(a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x10000LL) != 0 )
    *(_BYTE *)(a3 + 2) = 7;
  *(_DWORD *)(a2 + 148) = *(unsigned __int8 *)(a3 + 5);
  *(_WORD *)(a3 + 16) = v5 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2);
  *v24 ^= (*v24 ^ (MaxPrimaryStreams << 10)) & 0x7C00;
  DequeuePointer = Endpoint_GetDequeuePointer(v25, 0);
  v29 = v28;
  *(_QWORD *)(v27 + 8) = DequeuePointer;
  LODWORD(DequeuePointer) = v28;
  v30 = v28 & 0xFFFF7FFF;
  result = DequeuePointer | 0x8000;
  if ( (v29 & 0x7C00) != 0 )
    v30 = result;
  *(_DWORD *)v27 = v30;
  return result;
}
