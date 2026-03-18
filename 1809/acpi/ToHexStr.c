/*
 * XREFs of ToHexStr @ 0x1C0068670
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall ToHexStr(struct _SLIST_ENTRY *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rbp
  __int64 j; // r11
  __int64 v13; // r11
  __int64 v14; // r11
  unsigned int v15; // r9d
  unsigned __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // r11
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 i; // r8
  unsigned __int64 v23; // rdx
  __int64 v25; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !v4 )
  {
    v4 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 135LL, (__int64)&v25);
    if ( !v4 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v5 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v5 + 2) )
      {
        case 1:
          v20 = *(_QWORD *)(v5 + 16);
          LODWORD(v8) = 2;
          do
          {
            v20 >>= 4;
            v8 = (unsigned int)(v8 + 1);
          }
          while ( v20 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v21 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v21;
          if ( v21 )
          {
            **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 48;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 1LL) = 120;
            v10 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            for ( i = (int)v8 - 1; i >= 2; --i )
            {
              v23 = v10 & 0xF;
              v10 >>= 4;
              *(_BYTE *)(i + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v23];
            }
            goto LABEL_23;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v5 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v19 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v19;
          if ( v19 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88), v10);
          }
          break;
        case 3:
          v7 = *(_DWORD *)(v5 + 24);
          if ( v7 )
            v8 = (unsigned int)(v7 + 4 * v7 - 1);
          else
            v8 = 0LL;
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("length=%x,size=%x\n", v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v9 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v9;
          if ( v9 )
          {
            v11 = 0LL;
            for ( j = 0LL; (unsigned int)v11 < *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL); j = (unsigned int)(v18 + 1) )
            {
              *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 48;
              v13 = (unsigned int)(j + 1);
              *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 120;
              v14 = (unsigned int)(v13 + 1);
              v15 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL) + v11);
              v11 = (unsigned int)(v11 + 1);
              v16 = (unsigned __int64)v15 >> 4;
              v10 = v15 & 0xF;
              *(_BYTE *)(v14 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v16];
              v17 = (unsigned int)(v14 + 1);
              *(_BYTE *)(v17 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v10];
              v18 = (unsigned int)(v17 + 1);
              *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
            }
LABEL_23:
            *(_BYTE *)(v8 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88), v10);
          }
          break;
        default:
          v4 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError((__int64)a1, -1072431098);
          v6 = 188;
LABEL_20:
          PrintDebugMessage(v6, 0LL, 0LL, 0LL, 0LL);
          return v4;
      }
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      v6 = 187;
      goto LABEL_20;
    }
  }
  return v4;
}
