/*
 * XREFs of wistd::function_long___cdecl(unsigned_long)_::operator___lambda_a95af7086c80fda5bbb6272344ecf907__void_ @ 0x1803D847C
 * Callers:
 *     ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x1803D8630 (--$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@.c)
 * Callees:
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180126C94 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

__int64 __fastcall wistd::function_long___cdecl_unsigned_long__::operator___lambda_a95af7086c80fda5bbb6272344ecf907__void_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  v5 = operator new(v4, (void *)(a1 + 8));
  *v5 = &off_18044FCB8;
  v5[1] = 0LL;
  if ( v5 + 1 != a2 )
  {
    v5[1] = *a2;
    *a2 = 0LL;
  }
  v5[2] = a2[1];
  *(_QWORD *)(a1 + 112) = v5;
  return a1;
}
