/*
 * XREFs of WheapWmiExecuteErrorInjectionMethod @ 0x1403427AC
 * Callers:
 *     WheapWmiExecuteMethod @ 0x140342CBC (WheapWmiExecuteMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapWmiExecuteErrorInjectionMethod(int a1, unsigned int a2, int *a3, unsigned int a4, int *a5)
{
  int v5; // ebx
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int *v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // r9
  int InjectionCapabilities; // eax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v19 = 0;
  v8 = a1 - 1;
  if ( !v8 )
  {
    InjectionCapabilities = PshedGetInjectionCapabilities(&v19);
    v9 = 8;
    if ( a2 >= 8 )
    {
      if ( InjectionCapabilities >= 0 )
      {
        v18 = v19;
        v10 = 0;
        *a3 = 0;
        a3[1] = v18;
        goto LABEL_10;
      }
      goto LABEL_8;
    }
LABEL_12:
    v10 = -1073741789;
    goto LABEL_10;
  }
  if ( v8 == 1 )
  {
    if ( a4 < 0x24 )
    {
      v10 = -1073741811;
      v9 = 0;
      goto LABEL_10;
    }
    v11 = (unsigned int)*a3;
    v12 = *((_QWORD *)a3 + 1);
    v13 = (unsigned int *)(a3 + 4);
    v14 = *((_QWORD *)a3 + 2);
    v15 = v13 + 2;
    v9 = 4;
    if ( a2 >= 4 )
    {
      v10 = PshedInjectError(v11, v12, v14, *v15, v15[1]);
      if ( v10 >= 0 )
      {
LABEL_9:
        *a3 = v5;
        goto LABEL_10;
      }
LABEL_8:
      v10 = -1073741823;
      v5 = -1073741823;
      goto LABEL_9;
    }
    goto LABEL_12;
  }
  v9 = 0;
  v10 = -1073741161;
LABEL_10:
  *a5 = v9;
  return (unsigned int)v10;
}
