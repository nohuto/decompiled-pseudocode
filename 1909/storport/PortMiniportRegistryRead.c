/*
 * XREFs of PortMiniportRegistryRead @ 0x1C00195D0
 * Callers:
 *     StorPortRegistryRead @ 0x1C0019470 (StorPortRegistryRead.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 __fastcall PortMiniportRegistryRead(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  _BYTE *v9; // r14
  int v10; // eax
  int *v11; // rcx
  __int64 v12; // rbx
  PVOID SystemRoutineAddress; // rax
  int v14; // r12d
  int v15; // eax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  _WORD *v20; // rcx
  __int64 v21; // rbx
  int v22; // edx
  unsigned int i; // r8d
  __int64 v24; // [rsp+30h] [rbp-59h] BYREF
  PVOID P; // [rsp+38h] [rbp-51h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v27[14]; // [rsp+50h] [rbp-39h] BYREF
  int v28; // [rsp+F0h] [rbp+67h] BYREF
  int v29; // [rsp+100h] [rbp+77h] BYREF

  v28 = 0;
  v29 = -1;
  v24 = 0LL;
  P = 0LL;
  memset(v27, 0, sizeof(v27));
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (_BYTE *)(*(_QWORD *)(a4 + 32) + *(unsigned int *)(a4 + 52));
  LODWORD(v27[4]) = 0;
  v27[2] = v8;
  v10 = 20;
  LODWORD(v27[1]) = 20;
  if ( a3 == 1 )
  {
    v10 = 52;
    v27[3] = &v24;
    v11 = &v28;
    LODWORD(v27[1]) = 52;
  }
  else
  {
    if ( a3 == 4 )
    {
      v10 = 52;
      v27[3] = v9;
      LODWORD(v27[1]) = 52;
    }
    else
    {
      v27[3] = a4;
      v27[0] = &PortpBinaryReadCallBack;
    }
    v11 = &v29;
  }
  v27[5] = v11;
  LODWORD(v27[6]) = 4;
  if ( (v10 & 0x20) != 0 )
  {
    LODWORD(v27[1]) = v10 | 0x100;
    LODWORD(v27[4]) = a3 << 24;
  }
  v12 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
          0LL,
          v12,
          v27,
          0LL,
          0LL);
  if ( v14 < 0 )
    goto LABEL_10;
  if ( a3 == 1 )
  {
    if ( (_WORD)v24 && (v17 = *(_DWORD *)(a4 + 44), v18 = (unsigned __int16)v24 >> 1, v18 < v17) )
    {
      v19 = v18 + 1;
      if ( WORD1(v24) - (unsigned __int64)(unsigned __int16)v24 >= 2 && *((_WORD *)P + v19 - 1) && v19 < v17 )
        ++v19;
      memset(v9, 0, *(unsigned int *)(a4 + 44));
      v20 = P;
      v21 = v19 - 1;
      v22 = 0;
      v9[v21] = 0;
      if ( v20 )
      {
        for ( i = 0; i < (unsigned int)v21; ++v22 )
        {
          if ( !*v20 )
            break;
          ++i;
          *v9++ = *(_BYTE *)v20++;
        }
      }
    }
    else
    {
      v14 = -1073741789;
      v22 = 0;
      *(_DWORD *)(a4 + 48) = ((unsigned int)(unsigned __int16)v24 + 1) >> 1;
    }
    *(_DWORD *)(a4 + 44) = v22;
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    if ( a3 == 4 )
    {
      *(_DWORD *)(a4 + 44) = 4;
      return (unsigned int)v14;
    }
    if ( *(_DWORD *)(a4 + 60) == -1073741789 )
    {
      v14 = -1073741789;
LABEL_10:
      v15 = *(_DWORD *)(a4 + 44);
      *(_DWORD *)(a4 + 44) = 0;
      *(_DWORD *)(a4 + 48) = v15;
    }
  }
  return (unsigned int)v14;
}
