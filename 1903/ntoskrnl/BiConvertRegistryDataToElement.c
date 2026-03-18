/*
 * XREFs of BiConvertRegistryDataToElement @ 0x14073E4C8
 * Callers:
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14073BD24 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiResolveLocateDevice @ 0x14092EE3C (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x14092F174 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14092F260 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertRegistryDataToElement(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // edi
  const WCHAR *v9; // r15
  unsigned int v11; // esi
  char v12; // r12
  __int64 v13; // rbx
  NTSTATUS v14; // ebx
  _OWORD *v15; // rcx
  int v16; // eax
  unsigned int *v17; // rdi
  GUID *v19; // rdi
  GUID *v20; // rbx
  GUID *v21; // rcx
  GUID *v22; // rcx
  unsigned int v23; // ecx
  GUID *v24; // r13
  unsigned int v25; // r12d
  __int64 v26; // rax
  __int64 v27; // rdx
  UNICODE_STRING P; // [rsp+30h] [rbp-10h] BYREF
  size_t Size; // [rsp+88h] [rbp+48h] BYREF

  v7 = a7;
  *(_QWORD *)&P.Length = 0LL;
  P.Buffer = 0LL;
  v8 = a3;
  v9 = (const WCHAR *)a2;
  LODWORD(Size) = 0;
  v11 = 0;
  if ( (HIBYTE(a4) & 0xF) == 1 )
  {
    if ( a3 < 0x1C || a2[6] + 16LL != a3 )
      return (unsigned int)-1073741788;
    v15 = a2 + 4;
    if ( (a5 & 1) != 0 )
    {
      v16 = BiConvertBootEnvironmentDeviceToQualifiedPartition(v15, &P, &Size);
    }
    else if ( (a5 & 2) != 0 )
    {
      v16 = BiConvertBootEnvironmentDeviceToUnknown(v15);
    }
    else
    {
      v16 = BiConvertBootEnvironmentDeviceToNt(v15, a4, a5, &P, &Size);
    }
    v14 = v16;
    if ( v16 >= 0 )
    {
      v17 = *(unsigned int **)&P.Length;
      if ( **(_DWORD **)&P.Length == 8 && (int)BiResolveLocateDevice(a1, *(_QWORD *)&P.Length) >= 0 )
      {
        v27 = v17[6];
        v11 = Size - v27;
        memmove(v17, (char *)v17 + v27, (unsigned int)(Size - v27));
      }
      else
      {
        v11 = Size;
      }
      if ( v11 <= *v7 )
      {
        v20 = Guid;
        memmove(Guid, v17, v11);
        *(GUID *)&v20->Data2 = *(GUID *)v9;
        ExFreePoolWithTag(v17, 0x4B444342u);
        v14 = 0;
      }
      else
      {
        v14 = -1073741789;
        ExFreePoolWithTag(v17, 0x4B444342u);
      }
      goto LABEL_25;
    }
    v11 = Size;
    goto LABEL_67;
  }
  if ( (HIBYTE(a4) & 0xF) == 2 )
  {
    if ( a3 && (a3 & 1) == 0 )
    {
      v12 = 0;
      v11 = a3;
      v13 = a3;
      if ( *(_WORD *)((char *)a2 + a3 - 2) )
      {
        v11 = a3 + 2;
        v12 = 1;
        v8 = a3 + 2;
      }
      if ( v8 > *a7 )
        goto LABEL_8;
      v19 = Guid;
      memmove(Guid, a2, a3);
      if ( v12 )
        *(_WORD *)((char *)&v19->Data1 + v13) = 0;
LABEL_24:
      v14 = 0;
      goto LABEL_25;
    }
    return (unsigned int)-1073741788;
  }
  if ( (HIBYTE(a4) & 0xF) != 3 )
  {
    if ( (HIBYTE(a4) & 0xF) == 4 )
    {
      v23 = 0;
      v24 = Guid;
      v14 = 0;
      LODWORD(Size) = 0;
      if ( a3 >= 2 && (a3 & 1) == 0 )
      {
        v25 = 0;
        *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
        if ( *(_WORD *)a2 )
        {
          do
          {
            if ( v23 >= v8 )
              break;
            v11 += 16;
            v25 = v11;
            if ( v11 <= *v7 )
            {
              RtlInitUnicodeString(&P, v9);
              v14 = RtlGUIDFromString(&P, v24);
              if ( v14 < 0 )
                goto LABEL_67;
              v23 = Size;
              ++v24;
            }
            v26 = -1LL;
            do
              ++v26;
            while ( v9[v26] );
            v23 += 2 * v26 + 2;
            LODWORD(Size) = v23;
            v9 += (unsigned int)(v26 + 1);
          }
          while ( *v9 );
        }
        if ( v25 <= *v7 )
          goto LABEL_25;
        goto LABEL_8;
      }
      return (unsigned int)-1073741788;
    }
    if ( (HIBYTE(a4) & 0xF) == 5 )
    {
      v11 = 8;
      if ( a3 > 8 )
        return (unsigned int)-1073741788;
      if ( *a7 < 8 )
        goto LABEL_8;
      v21 = Guid;
      *(_QWORD *)&Guid->Data1 = 0LL;
    }
    else
    {
      if ( (HIBYTE(a4) & 0xF) == 6 )
      {
        if ( a3 != 1 )
          return (unsigned int)-1073741788;
        v11 = 2;
        if ( *a7 >= 2 )
        {
          v22 = Guid;
          BYTE1(Guid->Data1) = 0;
          LOBYTE(v22->Data1) = *(_BYTE *)a2 != 0;
          goto LABEL_24;
        }
        goto LABEL_8;
      }
      if ( (HIBYTE(a4) & 0xF) == 7 )
      {
        if ( !a3 || (a3 & 7) != 0 )
          return (unsigned int)-1073741788;
        v11 = a3;
        if ( *a7 < a3 )
          goto LABEL_8;
      }
      else
      {
        if ( !a3 )
          return (unsigned int)-1073741788;
        v11 = a3;
        if ( a3 > *a7 )
          goto LABEL_8;
      }
      v21 = Guid;
    }
    memmove(v21, a2, a3);
    goto LABEL_24;
  }
  v11 = 16;
  if ( *a7 >= 0x10 )
  {
    if ( a3 < 2 || (a3 & 1) != 0 )
      return (unsigned int)-1073741788;
    *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
    RtlInitUnicodeString(&P, (PCWSTR)a2);
    v14 = RtlGUIDFromString(&P, Guid);
    if ( v14 >= 0 )
      goto LABEL_24;
LABEL_67:
    if ( v14 != -1073741789 )
      return (unsigned int)v14;
    goto LABEL_25;
  }
LABEL_8:
  v14 = -1073741789;
LABEL_25:
  *v7 = v11;
  return (unsigned int)v14;
}
