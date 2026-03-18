/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x1C0035F9C
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00048C0 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00362EC (UsbDevice_ReconfigureEndpoint.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C001619C (Endpoint_GetMaxPrimaryStreams.c)
 */

int __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  char v7; // al
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned __int8 v12; // cl
  unsigned int v13; // r8d
  unsigned int v14; // edi
  unsigned int v15; // r10d
  unsigned int v16; // eax
  int v17; // edx
  int v18; // edx
  char v19; // cl
  unsigned __int8 v20; // al
  int v21; // ecx
  int v22; // eax
  int v23; // r8d
  char v24; // cl
  char v25; // al
  int v26; // ecx
  int MaxPrimaryStreams; // eax
  _DWORD *v28; // r11
  __int64 v29; // rcx
  __int64 DequeuePointer; // rax
  __int64 v31; // r11
  int v32; // r10d
  __int16 v33; // cx
  int result; // eax
  unsigned int v35; // r10d
  signed __int64 v36[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  *(_DWORD *)(a3 + 4) ^= (*(_DWORD *)(a3 + 4) ^ (8 * *(_DWORD *)(a2 + 120))) & 0x38;
  *(_WORD *)(a3 + 6) = *(_WORD *)(a2 + 100) & 0x7FF;
  v7 = *(_BYTE *)(a2 + 99) & 3;
  *(_OWORD *)v36 = *(_OWORD *)(*(_QWORD *)a2 + 272LL);
  if ( v7 == 1
    || ((v7 == 3) & _bittest64(v36, 0x34u)) != 0
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
  v13 = HIWORD(v10);
  v14 = HIWORD(v10);
  v15 = v10 >> 8;
  switch ( v11 )
  {
    case 0:
      if ( (((v10 & 0x38) - 24) & 0xFFFFFFDF) == 0 )
      {
        if ( v12 >= 0x10u )
          *(_BYTE *)(a3 + 2) = 8 - (v12 < 0x20u);
        else
          *(_BYTE *)(a3 + 2) = 6;
        v4 = HIWORD(v10);
        *(_WORD *)(a3 + 18) = HIWORD(v10);
        *(_BYTE *)(a3 + 3) = 0;
      }
      v16 = HIWORD(v10);
      goto LABEL_35;
    case 1:
      v17 = v10 & 0x38;
      if ( v17 != 56 )
      {
        if ( v17 != 24 )
        {
          if ( v17 != 40 && v17 != 8 )
            goto LABEL_34;
          *(_WORD *)(a3 + 2) = 3;
          v4 = v13;
LABEL_33:
          *(_WORD *)(a3 + 18) = v13;
LABEL_34:
          v16 = (unsigned __int16)v13;
LABEL_35:
          *(_DWORD *)(a2 + 152) = v16;
          break;
        }
        LOWORD(v13) = v14;
      }
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
      v4 = (unsigned __int16)v13;
      *(_BYTE *)(a3 + 3) = 0;
      goto LABEL_33;
    case 2:
      v18 = v10 & 0x38;
      if ( ((v18 - 24) & 0xFFFFFFCF) == 0 || v18 == 8 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            v19 = 5;
          else
            v19 = v12 - 1;
        }
        else
        {
          v19 = 0;
        }
        *(_BYTE *)(a3 + 2) = v19;
        v20 = (*(_WORD *)(a2 + 100) >> 11) & 3;
        *(_BYTE *)(a3 + 3) = 0;
        v21 = v20;
        v22 = *(unsigned __int16 *)(a3 + 6);
        LOBYTE(v15) = v21;
        *(_BYTE *)(a3 + 5) = v21;
        LOWORD(v13) = v22;
        v4 = v22 * (v21 + 1);
        *(_WORD *)(a3 + 18) = v22 * (v21 + 1);
      }
      *(_DWORD *)(a2 + 152) = (unsigned __int16)v13 * ((unsigned __int8)v15 + 1);
      break;
    case 3:
      v23 = v10 & 0x38;
      if ( ((v23 - 24) & 0xFFFFFFCF) == 0 && v23 != 72 || v23 == 8 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            v24 = 5;
          else
            v24 = v12 - 1;
        }
        else
        {
          v24 = 0;
        }
        *(_BYTE *)(a3 + 2) = v24;
        v25 = *(_BYTE *)(a2 + 106);
        if ( v25 >= 0 )
        {
          v4 = *(unsigned __int16 *)(a2 + 107);
          *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ ((unsigned __int8)v25 << 8)) & 0x300;
        }
        else
        {
          v4 = *(_DWORD *)(a2 + 113);
          *(_DWORD *)a3 &= 0xFFFFFCFF;
        }
        *(_WORD *)(a3 + 18) = v4;
        *(_BYTE *)(a3 + 3) = BYTE2(v4);
      }
      if ( (((v10 & 0x38) - 8) & 0xFFFFFFDF) != 0 )
        v26 = HIWORD(v10) * (BYTE1(v10) + 1);
      else
        v26 = v4;
      *(_DWORD *)(a2 + 152) = v26;
      *(_BYTE *)(a3 + 5) = *(_BYTE *)(a2 + 105);
      break;
  }
  if ( *(_BYTE *)(a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x10000LL) != 0 )
    *(_BYTE *)(a3 + 2) = 7;
  *(_DWORD *)(a2 + 148) = *(unsigned __int8 *)(a3 + 5);
  *(_WORD *)(a3 + 16) = v4 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2);
  *v28 ^= (*v28 ^ (MaxPrimaryStreams << 10)) & 0x7C00;
  DequeuePointer = Endpoint_GetDequeuePointer(v29, 0);
  v33 = v32;
  *(_QWORD *)(v31 + 8) = DequeuePointer;
  result = v32 | 0x8000;
  v35 = v32 & 0xFFFF7FFF;
  if ( (v33 & 0x7C00) != 0 )
    v35 = result;
  *(_DWORD *)v31 = v35;
  return result;
}
