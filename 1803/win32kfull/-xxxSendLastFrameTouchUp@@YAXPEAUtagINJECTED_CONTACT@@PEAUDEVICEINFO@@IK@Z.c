/*
 * XREFs of ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01A8D84
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01A9474 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01A8C18 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01A8ED4 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

void __fastcall xxxSendLastFrameTouchUp(struct tagINJECTED_CONTACT *a1, struct DEVICEINFO *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebp
  _DWORD *v5; // r14
  unsigned int v6; // ebx
  _DWORD *v7; // rcx
  unsigned int v8; // esi
  struct tagPOINTER_TOUCH_INFO *v11; // rdi
  unsigned int v12; // r9d
  unsigned int i; // r8d
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 ThreadWin32Thread; // rax
  _QWORD v17[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (_DWORD)a3 )
  {
    v4 = a3;
    v5 = (_DWORD *)((char *)a1 + 8);
    v6 = 0;
    v7 = (_DWORD *)((char *)a1 + 8);
    v8 = 0;
    a3 = (unsigned int)a3;
    do
    {
      if ( ((*v7 - 0x20000) & 0xFFFDFFFF) != 0 )
        ++v8;
      v7 += 3;
      --a3;
    }
    while ( a3 );
    if ( v8 )
    {
      v11 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144LL * v8, 1953067861LL);
      if ( v11 )
      {
        v12 = 0;
        for ( i = 0; i < v4; ++i )
        {
          if ( ((*v5 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            v14 = 18LL * v12;
            *((_DWORD *)v11 + 2 * v14 + 1) = i;
            *((_QWORD *)v11 + v14 + 4) = *((_QWORD *)v5 - 1);
            *((_DWORD *)v11 + 2 * v14 + 3) = ((*v5 & 4) != 0 ? 0x40000 : 0x20000) | 0x8000;
            ++v12;
            *v5 = 0x20000;
          }
          v5 += 3;
        }
        PushW32ThreadLock((__int64)v11, v17, (__int64)Win32FreePool);
        if ( a4 )
          v6 = _GetQpcBasedTouchStackTime() - a4;
        xxxSendToTouchStack(a2, v8, v11, v6);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
        *(_QWORD *)(ThreadWin32Thread + 16) = v17[0];
        Win32FreePool(v11);
      }
    }
  }
}
