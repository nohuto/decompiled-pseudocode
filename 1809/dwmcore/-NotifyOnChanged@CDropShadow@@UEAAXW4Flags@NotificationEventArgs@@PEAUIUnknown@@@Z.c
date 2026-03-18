/*
 * XREFs of ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009F530
 * Callers:
 *     <none>
 * Callees:
 *     ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801946B0 (-OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

double __fastcall CDropShadow::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD **v6; // r14
  _QWORD *i; // rbx

  if ( a3 )
  {
    if ( a3 != a1 )
    {
      CDropShadow::ShadowIntermediates::OnChanged(a1 + 128);
      v6 = *(_QWORD ***)(a1 + 200);
      for ( i = *v6; i != v6; i = (_QWORD *)*i )
        CDropShadow::ShadowIntermediates::OnChanged(i + 3);
      if ( a2 == 1 )
        a2 = 6;
    }
  }
  return CResource::NotifyOnChanged(a1, a2, a1);
}
