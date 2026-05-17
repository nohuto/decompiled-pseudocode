/*
 * XREFs of sub_180026E54 @ 0x180026E54
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x1800261E0 (RtlFindActivationContextSectionGuid.c)
 *     RtlFindActivationContextSectionString @ 0x180026BF0 (RtlFindActivationContextSectionString.c)
 * Callees:
 *     sub_180026FF4 @ 0x180026FF4 (sub_180026FF4.c)
 */

__int64 __fastcall sub_180026E54(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  struct _TEB *v4; // r13
  const char *SystemDefaultActivationContextData; // rdi
  __int64 v9; // rbx
  struct _PEB *ProcessEnvironmentBlock; // r15
  unsigned int v11; // ecx
  int v12; // esi
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rax
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v17; // [rsp+68h] [rbp+10h]

  v17 = a2;
  v4 = NtCurrentTeb();
  SystemDefaultActivationContextData = 0LL;
  v9 = 0LL;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  if ( a4 )
    *a4 = 0LL;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = 2;
  while ( 1 )
  {
    switch ( v11 )
    {
      case 0u:
        ActivationContextStackPointer = v4->ActivationContextStackPointer;
        if ( ActivationContextStackPointer && ActivationContextStackPointer->ActiveFrame )
        {
          v9 = *((_QWORD *)ActivationContextStackPointer->ActiveFrame + 1);
          if ( v9 )
          {
            if ( v9 == -4 )
            {
              SystemDefaultActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
            }
            else
            {
              if ( v9 == -3 )
              {
                SystemDefaultActivationContextData = "Actx ";
LABEL_30:
                *(_DWORD *)(a1 + 20) = 1;
                goto LABEL_8;
              }
              SystemDefaultActivationContextData = *(const char **)(v9 + 24);
            }
          }
          if ( SystemDefaultActivationContextData )
            goto LABEL_30;
        }
LABEL_20:
        SystemDefaultActivationContextData = (const char *)ProcessEnvironmentBlock->ActivationContextData;
        v9 = 0LL;
        if ( SystemDefaultActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 2;
          goto LABEL_8;
        }
LABEL_22:
        SystemDefaultActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
        v9 = -4LL;
        if ( SystemDefaultActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 3;
          goto LABEL_8;
        }
        break;
      case 1u:
        goto LABEL_20;
      case 2u:
        goto LABEL_22;
    }
    if ( v11 > 3 )
      return 3221225701LL;
LABEL_8:
    if ( !SystemDefaultActivationContextData )
      return 3222601729LL;
    result = sub_180026FF4(
               (_DWORD)SystemDefaultActivationContextData,
               *(_QWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 16),
               a2,
               a3);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1072365567 )
      return result;
    v11 = *(_DWORD *)(a1 + 20);
    if ( v11 == 3 )
      return result;
    a2 = v17;
  }
  v14 = 0;
  if ( v9 != -4 )
    v12 = 0;
  LOBYTE(v14) = v9 == 0;
  *(_DWORD *)(a1 + 24) = v14 | v12;
  if ( a4 )
  {
    v15 = 0LL;
    if ( v9 != -4 )
      v15 = v9;
    *a4 = v15;
  }
  return 0LL;
}
