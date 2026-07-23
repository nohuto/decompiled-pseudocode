/*
 * XREFs of PopCheckThermalPolicy @ 0x14075277C
 * Callers:
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 */

char __fastcall PopCheckThermalPolicy(__int64 a1, __int64 a2, char *a3, int *a4)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // rdi
  __int64 v10; // rcx
  const wchar_t *v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // ecx
  char v14; // al
  unsigned int v15; // eax
  bool v16; // al
  unsigned int v17; // eax
  __int64 i; // rcx
  unsigned __int64 v19; // rax
  unsigned int v20; // r10d
  unsigned int v21; // eax
  char result; // al
  char v23; // cl
  int v24; // eax
  int v25; // eax
  int v26; // r9d
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  bool v33; // cf

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x6D546F50u);
  v9 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v10 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v10 = 0LL;
  if ( v10 )
    v11 = *(const wchar_t **)(v10 + 288);
  else
    v11 = &word_140767740;
  *(_DWORD *)(a1 + 232) = 1000000 * *(_DWORD *)(a1 + 200);
  v12 = *(_DWORD *)(a1 + 140);
  if ( v12 && (v13 = *(_DWORD *)(a1 + 128), v13 >= v12) )
  {
    PopPrintEx(
      0,
      "Thermal Zone %S (%p): Above critical temperature (_TMP %d, _CRT %d). Shutdown initiated\n",
      v11,
      (const void *)a1,
      v13,
      *(_DWORD *)(a1 + 140));
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  *(_BYTE *)(a1 + 210) = v14;
  v15 = *(_DWORD *)(a1 + 188);
  v16 = v15 && *(_DWORD *)(a1 + 128) >= v15;
  *(_BYTE *)(a1 + 209) = v16;
  v17 = *(_DWORD *)(a1 + 136);
  if ( v17 )
  {
    v23 = *(_BYTE *)(a1 + 211);
    if ( *(_DWORD *)(a1 + 128) < v17 )
    {
      if ( v23 )
        *(_BYTE *)(a1 + 211) = 0;
    }
    else if ( !v23 )
    {
      *(_BYTE *)(a1 + 211) = 1;
    }
  }
  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(a1 + 144); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(a1 + 128) >= *(_DWORD *)(a1 + 4 * i + 148) )
      break;
  }
  v19 = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 220) = i;
  if ( a2 - *(_QWORD *)(a1 + 96) < v19 )
  {
    *a4 = 0;
    result = *(_BYTE *)(a1 + 65) & 1;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 128);
    if ( *(_DWORD *)(a1 + 80) != 100 || (v21 = *(_DWORD *)(a1 + 132)) != 0 && v20 >= v21 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
      {
        v25 = *(_DWORD *)(a1 + 108);
        v26 = *(_DWORD *)(a1 + 132);
      }
      else
      {
        v24 = 10000 * *(_DWORD *)(a1 + 124);
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_DWORD *)(a1 + 104) = v24;
        v25 = *(_DWORD *)(a1 + 132);
        v26 = v25;
        *(_DWORD *)(a1 + 108) = v25;
      }
      v27 = *(_DWORD *)(a1 + 76);
      v28 = *(_DWORD *)(a1 + 120) * (v20 - v26) + (v20 - v25) * *(_DWORD *)(a1 + 116);
      *a4 = v28;
      if ( v20 == v25 || (((v20 - v25) ^ v28) & 0x80000000) == 0 )
        v27 -= v28;
      if ( v27 > 1000 )
        v27 = 1000;
      v29 = *(_DWORD *)(a1 + 192);
      v30 = 0;
      if ( v27 >= 0 )
        v30 = v27;
      v31 = 10 * v29;
      if ( v30 >= 10 * v29 )
        v31 = v30;
      *(_DWORD *)(a1 + 76) = v31;
      v32 = v31 + 5;
      v33 = (unsigned int)(v32 / 10) < *(_DWORD *)(a1 + 196);
      *(_DWORD *)(a1 + 216) = v32 / 10;
      *(_BYTE *)(a1 + 224) = v33;
      result = 1;
      *a4 = 0;
      *(_DWORD *)(a1 + 108) = v20;
      *(_QWORD *)(a1 + 96) = a2;
      *(_DWORD *)(a1 + 212) = 1;
    }
    else
    {
      *a4 = 0;
      *(_DWORD *)(a1 + 212) = 0;
      result = 0;
    }
  }
  *a3 = result;
  if ( v9 )
    return ObfDereferenceObjectWithTag(v9, 0x6D546F50u);
  return result;
}
