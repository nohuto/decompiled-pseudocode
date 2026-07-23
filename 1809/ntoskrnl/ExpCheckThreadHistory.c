/*
 * XREFs of ExpCheckThreadHistory @ 0x140123D20
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE2A0 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall ExpCheckThreadHistory(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v3; // r8
  char v4; // r10
  char i; // r9
  struct _KTHREAD *v6; // rcx
  int v7; // r11d
  int v8; // ebx
  char v10; // dl
  struct _KTHREAD *Object; // rbx
  __int64 v12; // rax
  char j; // r9
  int v14; // esi
  char v15; // r10
  char v16; // di
  _QWORD v17[4]; // [rsp+0h] [rbp-38h]

  if ( (*(_DWORD *)(a1 + 152) & 7) == 4 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < 4; ++i )
  {
    v6 = *(struct _KTHREAD **)(a1 + 8LL * i + 72);
    if ( v6 )
    {
      if ( v6 != CurrentThread && v6->WaitBlockFill6[68] == 5 )
      {
        v10 = v6->WaitRegister.Flags & 7;
        if ( (v10 == 1 || v10 == 4) && v6->WaitBlockCount == 1 )
        {
          Object = (struct _KTHREAD *)v6->WaitBlock[0].Object;
          if ( Object != *(struct _KTHREAD **)(*(_QWORD *)(a1 + 16) + 8LL) )
          {
            if ( v10 == 4 || Object == (struct _KTHREAD *)&v6->SuspendEvent )
              return 1;
            v12 = v4++;
            v17[v12] = Object;
          }
        }
      }
    }
  }
  v7 = v4;
  v8 = v4 - 3;
  if ( v8 < 0 )
    return 0;
  for ( j = 1; ; ++j )
  {
    v14 = j;
    v15 = 1;
    v16 = j;
    if ( v7 - j >= 2 )
      break;
LABEL_20:
    ++v3;
    if ( v14 > v8 )
      return 0;
  }
  while ( v17[v3] != v17[v16] || ++v15 < 3 )
  {
    if ( 3 - v15 > v7 - ++v16 )
      goto LABEL_20;
  }
  return 1;
}
