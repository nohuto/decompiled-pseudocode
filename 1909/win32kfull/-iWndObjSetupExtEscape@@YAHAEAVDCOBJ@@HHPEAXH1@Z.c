/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278E78
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0123D78 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C0124300 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0125ACC (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02832F4 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C029F970 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall iWndObjSetupExtEscape(struct DCOBJ *a1, __int64 a2, __int64 a3, void *a4, unsigned int a5, void *a6)
{
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 v11; // r8
  __int64 v12; // rax
  HDEV v13; // rbx
  __int64 v14; // rsi
  struct _SURFOBJ *v15; // rdx
  HDEV DeviceHdev; // rax
  unsigned int v17; // ebx
  struct _RECTL v18; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+70h] [rbp-9h] BYREF
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  __int16 v23; // [rsp+80h] [rbp+7h]
  HDEV v24; // [rsp+D0h] [rbp+57h] BYREF

  v7 = a3;
  v8 = a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    UserEnterUserCritSec(a1, a2, a3);
    v20 = 0LL;
    v21 = 0;
    v22 = 0;
    v23 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, a1, 0);
    if ( (unsigned int)fBlockExtEscape(a1) )
      goto LABEL_12;
    v11 = *(_QWORD *)a1;
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v13 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v24 = v13;
    v14 = (v12 + 24) & -(__int64)(v12 != 0);
    v15 = (struct _SURFOBJ *)v14;
    if ( ((_DWORD)v13[10] & 0x20000) != 0 )
    {
      v18 = *(struct _RECTL *)(v11 + 1032);
      DeviceHdev = hdevFindDeviceHdev(v13, &v18, 0LL);
      v15 = (struct _SURFOBJ *)v14;
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v13 + 319) )
        {
          v15 = (struct _SURFOBJ *)*((_QWORD *)DeviceHdev + 319);
          if ( v15 )
            v15 = (struct _SURFOBJ *)((char *)v15 + 24);
        }
        else
        {
          v15 = (struct _SURFOBJ *)v14;
        }
        v13 = DeviceHdev;
        v24 = DeviceHdev;
      }
    }
    if ( *((_QWORD *)v13 + 360) )
    {
      v17 = PDEVOBJ::Escape((PDEVOBJ *)&v24, v15, v8, v7, a4, a5, a6);
      if ( gbWndobjUpdate )
      {
        gbWndobjUpdate = 0;
        vForceClientRgnUpdate();
      }
    }
    else
    {
LABEL_12:
      v17 = 0;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    if ( v20 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v20);
    UserLeaveUserCritSec();
    return v17;
  }
  else
  {
    EngSetLastError(6u);
    return 0LL;
  }
}
