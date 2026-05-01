/*
 * XREFs of ?GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18032B2CC
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x18005AAA0 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x18030EC5C (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18030ED24 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewDisplayMode(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned __int8 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD *Ptr; // r8
  __int64 v8; // r9
  char *v9; // rcx
  char *i; // rdx
  char *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = a1 + 53;
  AcquireSRWLockExclusive(a1 + 53);
  v16 = 0;
  v3 = (unsigned __int8 *)&v16;
  v4 = 0xCBF29CE484222325uLL;
  v5 = 4LL;
  do
  {
    v6 = *v3++;
    v4 = 0x100000001B3LL * (v6 ^ v4);
    --v5;
  }
  while ( v5 );
  Ptr = a1[48].Ptr;
  v8 = 2 * (v4 & (__int64)a1[51].Ptr);
  v9 = (char *)a1[46].Ptr;
  for ( i = (char *)Ptr[2 * (v4 & (__int64)a1[51].Ptr)]; ; i = *(char **)i )
  {
    v11 = (char *)Ptr[v8] == v9 ? (char *)a1[46].Ptr : *(char **)Ptr[v8 + 1];
    if ( i == v11 )
      break;
    if ( !*((_DWORD *)i + 4) )
      goto LABEL_11;
  }
  i = (char *)a1[46].Ptr;
LABEL_11:
  if ( i == v9 )
    goto LABEL_17;
  v12 = *(_QWORD *)(i + 20);
  if ( !(_BYTE)v12 )
    goto LABEL_17;
  v13 = HIDWORD(v12);
  v14 = 2;
  if ( (_DWORD)v13 == 2 )
    goto LABEL_18;
  if ( (_DWORD)v13 == 1 )
  {
    if ( !(unsigned __int16)WORD6(*(_OWORD *)(i + 36)) )
      v14 = 3;
  }
  else
  {
LABEL_17:
    v14 = 0;
  }
LABEL_18:
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  return v14;
}
