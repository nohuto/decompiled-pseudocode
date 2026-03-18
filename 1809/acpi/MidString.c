/*
 * XREFs of MidString @ 0x1C00677B0
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
 */

__int64 __fastcall MidString(struct _SLIST_ENTRY *a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // ecx
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "TII");
  if ( !v5 )
  {
    v5 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 120LL, 135LL, (__int64)&v17);
    if ( !v5 )
    {
      v6 = *(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL);
      if ( v6 < 2u || v6 > 3u )
      {
        v5 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)a1, -1072431098);
        v12 = 107;
        goto LABEL_26;
      }
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = v6;
      v7 = *(_QWORD *)(a2 + 80);
      v8 = *(unsigned int *)(v7 + 24);
      v9 = *(_QWORD *)(v7 + 56);
      if ( v9 < v8 )
      {
        if ( *(_QWORD *)(v7 + 96) + v9 < v8 )
          v13 = *(_QWORD *)(v7 + 96);
        else
          v13 = v8 - v9;
        if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) == 2 )
        {
          v14 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v13 + 1);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v14;
          if ( !v14 )
          {
            v5 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError((__int64)a1, -1073741670);
            PrintDebugMessage(106, 0LL, 0LL, 0LL, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v13 + 1;
        }
        else
        {
          v15 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v13);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v15;
          if ( !v15 )
          {
            v5 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError((__int64)a1, -1073741670);
            PrintDebugMessage(105, 0LL, 0LL, 0LL, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v13;
        }
        if ( !v5 )
        {
          if ( v13 )
          {
            do
            {
              *(_BYTE *)(v4 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = *(_BYTE *)(v4
                                                                                   + *(_QWORD *)(*(_QWORD *)(a2 + 80)
                                                                                               + 32LL)
                                                                                   + v9);
              ++v4;
            }
            while ( v4 < v13 );
          }
          return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88), v11);
        }
      }
      else if ( *(_WORD *)(v7 + 2) == 2 )
      {
        v10 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 1u);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v10;
        if ( !v10 )
        {
          v5 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError((__int64)a1, -1073741670);
          v12 = 105;
LABEL_26:
          PrintDebugMessage(v12, 0LL, 0LL, 0LL, 0LL);
          return v5;
        }
        **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 1;
        return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88), v11);
      }
    }
  }
  return v5;
}
