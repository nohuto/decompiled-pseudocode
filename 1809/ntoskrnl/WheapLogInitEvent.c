/*
 * XREFs of WheapLogInitEvent @ 0x140727EA4
 * Callers:
 *     WheaInitialize @ 0x1409AFD68 (WheaInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAD20 (EtwWrite.c)
 *     WheaLogInternalEvent @ 0x14017D360 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  char *PoolWithTag; // rdi
  __int64 *v1; // r8
  int i; // r9d
  __int64 v3; // rcx
  __int64 *v4; // rax
  char *v5; // rdx
  __int128 v6; // xmm1
  struct _LIST_ENTRY *Blink; // rsi
  unsigned int v8; // ebx
  _DWORD *v9; // rax
  void *v10; // rbx
  unsigned int v11; // r8d
  unsigned int Size; // [rsp+38h] [rbp-9h] BYREF
  int Size_4; // [rsp+3Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *p_Size_4; // [rsp+58h] [rbp+17h]
  int v16; // [rsp+60h] [rbp+1Fh]
  int v17; // [rsp+64h] [rbp+23h]
  unsigned int *p_Size; // [rsp+68h] [rbp+27h]
  int v19; // [rsp+70h] [rbp+2Fh]
  int v20; // [rsp+74h] [rbp+33h]
  char *v21; // [rsp+78h] [rbp+37h]
  unsigned int v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]

  Size = 1064 * dword_1404C64A4;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(1064 * dword_1404C64A4), 0x61656857u);
  if ( PoolWithTag )
  {
    v1 = (__int64 *)qword_1404C64A8;
    for ( i = 0; v1 != &qword_1404C64A8; v1 = (__int64 *)*v1 )
    {
      v3 = 8LL;
      v4 = v1;
      v5 = &PoolWithTag[1064 * i];
      do
      {
        *(_OWORD *)v5 = *(_OWORD *)v4;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v4 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v4 + 2);
        *((_OWORD *)v5 + 3) = *((_OWORD *)v4 + 3);
        *((_OWORD *)v5 + 4) = *((_OWORD *)v4 + 4);
        *((_OWORD *)v5 + 5) = *((_OWORD *)v4 + 5);
        *((_OWORD *)v5 + 6) = *((_OWORD *)v4 + 6);
        v5 += 128;
        v6 = *((_OWORD *)v4 + 7);
        v4 += 16;
        *((_OWORD *)v5 - 1) = v6;
        --v3;
      }
      while ( v3 );
      ++i;
      *(_OWORD *)v5 = *(_OWORD *)v4;
      *((_OWORD *)v5 + 1) = *((_OWORD *)v4 + 1);
      *((_QWORD *)v5 + 4) = v4[4];
    }
    Blink = WheapDispatchPtr.Queue.ListEntry.Blink;
    v8 = Size;
    UserData.Reserved = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    UserData.Ptr = (ULONGLONG)&dword_1404C64A4;
    p_Size_4 = &Size_4;
    p_Size = &Size;
    UserData.Size = 4;
    Size_4 = 10;
    v16 = 4;
    v19 = 4;
    v21 = PoolWithTag;
    v22 = Size;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.Queue.ListEntry.Blink, &EVENT_WHEA_INIT_OP) == 1 )
    {
      EtwWrite((REGHANDLE)Blink, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
      v8 = Size;
    }
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 32LL, 0x61656857u);
    v10 = v9;
    if ( v9 )
    {
      v11 = Size;
      v9[3] = 0;
      v9[6] = 0;
      *v9 = 1733060695;
      v9[1] = 1;
      v9[2] = v11 + 32;
      v9[5] = -2147483646;
      v9[4] = 1280201291;
      v9[7] = v11;
      memmove(v9 + 8, PoolWithTag, Size);
      WheaLogInternalEvent((__int64)v10);
      ExFreePoolWithTag(v10, 0x61656857u);
    }
    ExFreePoolWithTag(PoolWithTag, 0x61656857u);
  }
}
