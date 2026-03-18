/*
 * XREFs of ValidatePointerOffset @ 0x1C01F01A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidatePointerOffset(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  int v4; // r15d
  unsigned int v5; // ebp
  unsigned __int64 v6; // rbx
  unsigned int *v8; // rsi
  int v9; // edi
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r8d
  int v18; // [rsp+94h] [rbp+Ch]
  int v19; // [rsp+A4h] [rbp+1Ch]

  v19 = HIDWORD(a3);
  v18 = HIDWORD(a1);
  v4 = a3;
  v5 = 0;
  v6 = a3;
  *(_QWORD *)a4 = a3;
  v8 = (unsigned int *)a2;
  v9 = a1;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    LOBYTE(a2) = 19;
    v11 = HMValidateHandleNoSecure(v10, a2);
    if ( v11 )
    {
      v12 = *(_DWORD **)(v11 + 480);
      v13 = v9 + v4;
      v14 = v18 + v19;
      if ( v9 + v4 >= v12[40] )
      {
        v15 = v12[42];
        if ( v13 >= v15 )
          v13 = v15 - 1;
      }
      else
      {
        v13 = v12[40];
      }
      if ( v14 >= v12[41] )
      {
        v16 = v12[43];
        if ( v14 >= v16 )
          v14 = v16 - 1;
      }
      else
      {
        v14 = v12[41];
      }
      v6 = __PAIR64__(v14 - v18, v13 - v9);
    }
    *(_QWORD *)a4 = v6;
    v5 = 1;
  }
  if ( (unsigned int)TouchTargetingEnabledForInput(*((_QWORD *)v8 + 5), v8 + 2) )
  {
    EtwTraceTouchTargetingOffset(*a4, a4[1], v8[3], *(unsigned __int16 *)v8);
    EtwTraceTouchTargetingPointerEvent(
      v8[3],
      *(unsigned __int16 *)v8,
      v8[2],
      v8[5],
      v8[27],
      v8[10],
      v8[11],
      v8[28],
      v8[30],
      v8[29],
      v8[31],
      v8[36]);
  }
  return v5;
}
