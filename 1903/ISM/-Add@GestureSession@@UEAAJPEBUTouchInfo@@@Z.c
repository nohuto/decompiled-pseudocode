/*
 * XREFs of ?Add@GestureSession@@UEAAJPEBUTouchInfo@@@Z @ 0x18010A480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::Add(GestureSession *this, const struct TouchInfo *a2)
{
  __int64 ContactCount; // r9
  UINT16 *v5; // rdx
  __int64 v6; // r11
  TouchContact *ContactArray; // r10
  UINT16 ContactID; // ax
  char v9; // [rsp+32h] [rbp-1A6h] BYREF

  ContactCount = a2->ContactCount;
  if ( (unsigned int)ContactCount > 0xA )
    return 2147942487LL;
  if ( a2->ContactCount )
  {
    v5 = (UINT16 *)&v9;
    v6 = ContactCount;
    ContactArray = a2->ContactArray;
    do
    {
      *(v5 - 1) = ContactArray->Flags;
      ContactID = ContactArray->ContactID;
      ++ContactArray;
      *v5 = ContactID;
      v5 += 20;
      *(_DWORD *)(v5 - 19) = ContactArray[-1].WindowX;
      *(_DWORD *)(v5 - 17) = ContactArray[-1].WindowY;
      *(_DWORD *)(v5 - 15) = ContactArray[-1].ScreenX;
      *(_DWORD *)(v5 - 13) = ContactArray[-1].ScreenY;
      --v6;
    }
    while ( v6 );
  }
  return (*(__int64 (__fastcall **)(GestureSession *, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
           this,
           a2->Flags,
           a2->TimeStamp);
}
